#include <string.h>
#include "utils.h"
#include <arpa/inet.h>
#include <netdb.h>
#include <netinet/in.h>
#include <stdio.h>

namespace xget {
        int getipbyname(const char *name, char *ret)
        {
                if (name == NULL || ret == NULL) return -1;

                struct hostent *h;

                if ((h = gethostbyname(name)) == NULL) {
                        return 0;
                } else {
                        sprintf(ret, "%s", inet_ntoa(*((struct in_addr *)h->h_addr)));
                }

                return 1;
        }

        int gethostnamebyurl(const char *url, char *ret)
        {
                if (ret == NULL) 
                {
                        return -1;
                }

                const char *prefix = "http://";
                char *p = (char *)url;

                if (strncmp(url, prefix, strlen(prefix)) == 0) {
                        p = (char*)url + strlen(prefix);
                } 

                strcpy(ret, strtok(p, "/"));

                return 1;
        }
}
