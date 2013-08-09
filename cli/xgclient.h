#ifndef __XGCLIENT__
#define __XGCLIENT__

namespace xget {
        class xgclient
        {
                public:
                        xgclient(const char *url);
                        ~xgclient();
                        void download();

                private:
                        char _hostname[512];
                        char _server_ip[16];
                        char _url[4096]; 
                        bool inited;
        };
}
#endif
