#include "ep_server.h"

namespace xget {
        int ExpandBuffer(net_buf_t *buf) 
        {
                void *n = realloc(buf->buf, buf->len *2);

                if (n) {
                        buf->buf = (char*)n;
                        buf->len = buf->len *2;
                        return 1;
                }

                return -1;
        }

        int ResetBuffer(net_buf_t *buf)
        {
                buf->offset = 0;
                buf->datasize = 0;
                if (buf->len > NET_BUF_SIZE) {
                        void *t = realloc(buf->buf, NET_BUF_SIZE);
                        if (t) {
                                buf->buf = (char*)t;
                                buf->len = NET_BUF_SIZE;
                                return 1;
                        } else {
                                return -1;
                        }
                }

                return 1;
        }

        int FreeBuffer(net_buf_t *buf)
        {
                if (buf == NULL) return 0;
                free(buf->buf);
                free(buf);

                return 1;
        }

        int ReceiveBuffer(net_buf_t *buf, int fd)
        {
             if (buf == NULL || buf->buf == NULL) return -1;   

             int t = 0;
             while(true) {
                     int avail_len = buf->len - buf->datasize;
                     if (avail_len == 0) {
                             if (!ExpandBuffer(buf)) return -2;
                             avail_len = buf->len - buf->datasize;
                     }
                     
                     int n = recv(fd, buf->buf + buf->datasize, avail_len, 0);
                     t += n;
                     if (n > 0) {
                             buf->datasize += n;
                             if (n < avail_len) break;
                     } else if (n == 0) {
                             return 0;
                     } else {
                             if (errno == EAGAIN || errno == EWOULDBLOCK) {
                                     if (t > 0) return t;
                                     return -1;
                             } else {
                                     return 0;
                             }
                     }
             }
        }

        ev_t *EpollServer::ev;

        EpollServer::EpollServer(void *data) 
        {
                EpollServer::CreateServer(data, 1024);
        }

        EpollServer::EpollServer(void *data, size_t size) 
        {
                EpollServer::CreateServer(data, size);
        }

        void EpollServer::CreateServer(void *data, size_t size)
        {
                int fd = epoll_create(1024);

                if (fd > 0) {
                        ev = (ev_t*)calloc(1, sizeof(ev_t)); 
                        if (!ev) {
                                return;
                        }
                        ev->fd = fd;
                        ev->data = data;
                        ev->api_data = malloc(sizeof(struct epoll_event) *EV_COUNT);

                        if (!ev->api_data) {
                                free(ev);
                                return;
                        }

                        ev->events_size = size;
                        ev->events = 
                                (ev_file_item_t*)calloc(size, sizeof(ev_file_item_t));
                        if (!ev->events) {
                                free(ev->api_data);
                                free(ev);
                        }
                }
        }

        EpollServer::~EpollServer()
        {
        }

        int EpollServer::AddFileItem(int fd, int mask, void *d,
                        ev_file_func *rf, ev_file_func *wf) 
        {
                if (fd >= (int)ev->events_size) {
                        return -1;
                }

                ev_file_item_t *item = ev->events + fd;
                if (item->mask > 0) {
                        return -1;
                }

                struct epoll_event epev;
                epev.events = mask;
                epev.data.fd = fd;

                if (epoll_ctl(ev->fd, EV_CTL_ADD, fd, &epev) == 0) {
                        item->mask = mask;
                        item->data = d;
                        item->wfunc = wf;
                        item->rfunc = rf;
                        item->fd = fd;

                        return 0;
                }

                return -1;
        }

        int EpollServer::DelFileItem(int fd)
        {
                if (fd >= (int)ev->events_size) return -1;
                ev_file_item_t *fi = ev->events + fd;
                if (fi->mask == 0) return 0;

                fi->mask = 0;
                int op = EV_CTL_DEL;

                struct epoll_event epev;
                epev.events = fi->events;
                epev.data.fd = fd;
                return epoll_ctl(ev->fd, op, fd, &epev);
                return 0;
        }

        void EpollServer::Run()
        {
               while (ev->stop <= 0) {
                       struct epoll_event* e = (struct epoll_event*)ev->api_data;
                       int j = epoll_wait(ev->fd, e, EV_COUNT, 100);
                       for (int i = 0; i < j; i++) {
                                int fd = e[i].data.fd;
                                ev_file_item_t *fi = ev->events + fd;
                                int evts = e[i].events;

                                if (evts & EV_READABLE & fi->mask) {
                                        if (fi->rfunc) {
                                                fi->rfunc(fi);
                                        }
                                }

                                if (evts & EV_WRITABLE & fi->mask) {
                                        if (fi->wfunc) {
                                                fi->wfunc(fi);
                                        }
                                }
                       }
               }
        }
}

