#include <iostream>
#include <cassert>
#include <sys/socket.h>
#include <sys/types.h>
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "xgclient.h"
#include "utils.h"

using namespace std;
using namespace xget;

xgclient::xgclient(const char *url)
{
        strcpy(_url, url);
        if(gethostnamebyurl(_url, _hostname) > 0) {
                if (getipbyname(_hostname, _server_ip) > 0) {
                        inited = true;
                }
        }
}

xgclient::~xgclient()
{

}

void xgclient::download()
{
       cout << _hostname << endl;
       cout << _server_ip << endl;
}

