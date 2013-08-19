#ifndef __EP_SERVER_H__ 
#define _EP_SERVER_H__

#define EV_CTL_ADD 1
#define EV_CTL_DEL 2
#define EV_CTL_MOD 3
#define EV_COUNT 10000
#define EV_READABLE EPOLLIN 
#define EV_WRITABLE (EPOLLOUT | EPOLLERR | EPOLLHUP)
#define EV_ALL 3
#define NET_BUF_SIZE 4096

#include <stdint.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <string.h>
#include <sys/epoll.h>
#include <errno.h>

namespace xget
{
        struct ev_s;
        struct ev_file_item_s;
        typedef void ev_file_func(ev_file_item_s *fi);

        typedef struct ev_file_item_s {
                int fd;
                int mask;
                int events;
                void *data;
                ev_file_func *wfunc;
                ev_file_func *rfunc;
        } ev_file_item_t;

        typedef struct ev_s {
                int fd;
                void *data;
                ev_file_item_t *events;
                size_t events_size;
                void *api_data;
                int stop;
        } ev_t;

        typedef struct net_buf_s {
                char *buf;
                size_t offset;
                size_t datasize;
                size_t len;
        } net_buf_t;

        class EpollServer
        {
                private:
                        void connectXgCenter();
                public:
                        static ev_t *ev;
                        static void CreateServer(void *data, size_t size);

                        EpollServer(void*);
                        EpollServer(void*, size_t);
                        ~EpollServer();
                        static int AddFileItem(int fd, int mask, void* d, 
                                        ev_file_func *rf, ev_file_func *wf);
                        static int DelFileItem(int fd);
                        static void ExpandBuffer(net_buf_t *buf);
                        void Run();
        };
}

#endif
