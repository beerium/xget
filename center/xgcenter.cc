#include <sys/socket.h>
#include <fcntl.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <iostream>
#include <sys/epoll.h>
#include "agent.h"
#include "xgcenter.h"

using namespace xget;

XgCenter::XgCenter() : EpollServer(NULL)
{

}

XgCenter::~XgCenter()
{

}

int setnonblocking(int sock)
{
        int opts = fcntl(sock, F_GETFL);
        if (opts < 0) return -1;

        opts = opts | O_NONBLOCK;
        if (fcntl(sock, F_SETFL, opts) < 0)
                return -1;

        return 0;
}

bool XgCenter::Initialize()
{
        int fd = socket(AF_INET, SOCK_STREAM, 0);
        if (fd < 0) {
                return false;
        }

        int reuse = 1;
        setsockopt(fd, SOL_SOCKET, SO_REUSEADDR, &reuse, sizeof(int));

        if (setnonblocking(fd) < 0) {
                return false;
        }
        
        struct sockaddr_in addr1;
        addr1.sin_family = AF_INET;
        addr1.sin_port = htons(8111);
        inet_aton("0.0.0.0", &addr1.sin_addr);
        
        if (bind(fd, (struct sockaddr*)&addr1, sizeof(addr1)) < 0) {
                return false;
        }

        if (listen(fd, 1000) < 0) {
                return false;
        }


        int r = EpollServer::AddFileItem(fd, EV_READABLE, NULL, XgCenter::Accept, NULL);
        if (r < 0) return false;

        return true;
}

void XgCenter::Accept(ev_file_item_t *fi)
{
        struct sockaddr client_addr;

        socklen_t sin_size = sizeof(client_addr);
        int f = accept(fi->fd, &(client_addr), &sin_size);
        int err = setnonblocking(f);
        if (err < 0) return;

        Agent *a = new Agent;
        a->Id = f;
        int r = EpollServer::AddFileItem(f, EV_READABLE | EV_WRITABLE | EPOLLET,
                        a, XgCenter::Receive, XgCenter::Send);
        if (r < 0) {
                return;
        }
}

void XgCenter::Receive(ev_file_item_t *fi)
{
        Agent *a = (Agent*)fi->data;
        std::cout << "receive agent: " << a->Id  << std::endl;
}

void XgCenter::Send(ev_file_item_t *fi)
{
        Agent *a = (Agent*)fi->data; 
        std::cout << "send agent: " << a->Id << std::endl;
}
