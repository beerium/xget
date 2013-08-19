#include <iostream>
#include <cassert>
#include <sys/socket.h>
#include <sys/types.h>
#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include "xgclient.h"
#include "../core/utils.h"
#include "../core/http.h"
#include "../core/ep_server.h"
#include "../core/xget.pb.h"

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

void XgClient::GetAvailableServerList()
{
        struct sockaddr_in servaddr;
        int fd = socket(AF_INET, SOCK_STREAM, 0);

        if (fd < 0) {
                cout << "socket open error!" << endl;
                return;
        }

        memset(&servaddr, 0, sizeof(servaddr));
        servaddr.sin_family = AF_INET;
        servaddr.sin_port = htons(8111);
        string ip("192.168.199.8");

        if (inet_aton(ip.data(), &servaddr.sin_addr) <= 0) {
                cout << "inet_aton error" << endl;
                return;
        }

        if (::connect(fd, (struct sockaddr *)&servaddr, sizeof(servaddr)) < 0) {
                cout << " connect error" << endl;
                return;
        }

        GetServerListRequest req; 
        req.set_id(0);
        int cmd = 101;
        string body;
        req.SerializeToString(&body);
        int len = 8 + body.size();
        cout << len << endl;


        char *buf = (char*)malloc(len); 
        sprintf(buf, "%d%d%s",  htonl(len), htonl(cmd), body.data());
        write(fd, buf, len); 

//        write(fd, 
}
