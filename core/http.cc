#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <string.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <signal.h>
#include <sys/wait.h>
#include <sys/time.h>

#include "http.h"
#include "utils.h"

namespace xget 
{
        HttpHandler::HttpHandler(const char *url) {
                if (url == NULL) return;
                memset(_url, 0, sizeof(_url));
                strcpy(_url, url);

                memset(_hostname, 0, sizeof(_hostname));
                memset(_ip, 0, sizeof(_ip));
                memset(_location, 0, sizeof(_location));

                if (gethostnamebyurl(url, _hostname) > 0) {
                        getipbyname(_hostname, _ip);
                }

                //  prefix http:// size is 7
                strcpy(_location, _url + 7 + strlen(_hostname));                

                connect();
        }

        void HttpHandler::connect()
        {
                if (_url == NULL) {
                        _connected = false;
                        return;
                }

                struct sockaddr_in servaddr;
                if ((_fd = socket(AF_INET, SOCK_STREAM, 0)) < 0) {
                        _connected = false;
                        return ;
                }

                bzero(&servaddr, sizeof(servaddr));
                servaddr.sin_family = AF_INET;
                servaddr.sin_port = htons(80);
                if (inet_pton(AF_INET, _ip, &servaddr.sin_addr) <= 0) {
                        _connected = false;
                        return ;
                }

                if (::connect(_fd, (struct sockaddr *)&servaddr, sizeof(servaddr)) < 0) {
                        _connected = false;
                        return;
                }

                _connected = true;
        }

        int HttpHandler::GetFileSize() {
                if (_connected == false) return -1;
                char req[4096];

                memset(req, 0, sizeof(req));
                strcat(req, "HEAD ");
                sprintf(req, "%s%s%s%s\n\n", "HEAD ", _location, 
                                " HTTP/1.1\nhost: ", _hostname);
                printf("req:\n%s", req);
                int res = write(_fd, req, strlen(req));

                if (res < 0) return -1;

                char buf[4096];
                memset(buf, 0, sizeof(buf));
                int c = 0;

                while(1) {
                        usleep(1000);
                        int n = recv(_fd, buf + c, sizeof(buf), 0);

                        if (n <= 0) {
                                close(_fd);
                                _connected = false;
                                break;
                        }
                        c += n;
                }

                if (buf == NULL) return -1;

                if (strstr(buf, "HTTP/1.1 200 OK") == NULL) 
                        return -2;

                const char *ContentLengthHeader = "Content-Length: ";
                if (strstr(buf, ContentLengthHeader) == NULL)
                        return -3;

                char *p = strstr(buf, ContentLengthHeader) + strlen(ContentLengthHeader); 
                int ret = atoi(strtok(p, "\n"));
                                
                printf("resp:\n%s\nsize = %d\n ", buf, ret);

                return ret;
        }

        char *HttpHandler::GetFile(const char *range)
        {
                return NULL;
        }

        HttpHandler::~HttpHandler()
        {

        }
}
