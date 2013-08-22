#ifndef __XGCENTER_H__
#define __XGCENTER_H__

#include "../core/ep_server.h"
#include "agent.h"

namespace xget{
        class XgCenter : public EpollServer 
        {
                public:
                        XgCenter();
                        ~XgCenter();

                        static bool Initialize();
                        static void Receive(ev_file_item_t *fi);
                        static void Send(ev_file_item_t *fi);
                        static void Accept(ev_file_item_t *fi);
                        static void SendServerList(Agent *a, char *body, int len);
                        static void Close();
        };
}

#endif
