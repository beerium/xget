#include <iostream>
#include <cassert>
#include <sys/socket.h>
#include <sys/types.h>
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "xgclient.h"
#include "../core/utils.h"
#include "../core/http.h"
#include "../core/ep_server.h"

using namespace std;
using namespace xget;

XgClient::XgClient()
{
}

XgClient::~XgClient()
{

}

void XgClient::Download(const char *url)
{
       HttpHandler *http = new HttpHandler(url);
       int fileSize = http->GetFileSize();
       cout << "FileSize = " << fileSize << endl;
}

