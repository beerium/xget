#ifndef __NET_H__
#define __NET_H__

namespace xget
{
        class HttpHandler
        {
                private:
                       int filesize;
                       char _url[4096];
                       char _hostname[512];
                       char _ip[16];
                       char _location[4096];
                       bool _connected;
                       int _fd;

                       void connect();
                public:
                        HttpHandler(const char *url);
                        int GetFileSize();
                        char *GetFile(const char *range);
                        ~HttpHandler();

        };
}

#endif
