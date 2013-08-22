#ifndef __AGENT_H__
#define __AGENT_H__

#include "../core/ep_server.h"

namespace xget{
        class Agent
        {
                public:
                        int Id;
                        net_buf_t *sendBuf;
                        net_buf_t *recvBuf;
                        
                        Agent();
                        ~Agent();
        };
}
#endif
