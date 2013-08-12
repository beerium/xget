#ifndef __EP_SERVER_H__ 
#define _EP_SERVER_H__

#define EV_CTL_ADD 1
#define EV_CTL_DEL 2
#define EV_CTL_MOD 3
#define EV_COUNT 10000
#define EV_READABLE EPOLLIN 
#define EV_WRITABLE (EPOLLOUT | EPOLLERR | EPOLLHUP)
#define EV_ALL 3

#include <stdint.h>
#include <stdlib.h>

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

        class EpollServer
        {
                private:
                        void connectXgCenter();
                        ev_t *ev;
                public:
                        EpollServer(void*);
                        EpollServer(void*, size_t);
                        ~EpollServer();
                        int AddFileItem(int fd, int mask, void* d, 
                                        ev_file_func *rf, ev_file_func *wf);
                        int DelFileItem(int fd);
                        virtual void Receive(ev_file_item_t *fi);
                        virtual void Send(ev_file_item_t *fi);
                        void Run();
        };
}

#endif
