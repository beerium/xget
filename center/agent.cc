#include "agent.h"

namespace xget {
        Agent::Agent()
        {
                sendBuf = (net_buf_t*)calloc(1, sizeof(net_buf_t));
                sendBuf->buf = (char*)calloc(1, 4096);
                sendBuf->offset = 0;
                sendBuf->len = 4096;
                sendBuf->datasize = 0;

                recvBuf = (net_buf_t*)calloc(1, sizeof(net_buf_t));
                recvBuf->buf = (char*)calloc(1, 4096);
                recvBuf->offset = 0;
                recvBuf->len = 4096;
                recvBuf->datasize = 0;
        }

        Agent::~Agent()
        {
                free(sendBuf->buf);
                free(sendBuf);

                free(recvBuf->buf);
                free(recvBuf);
        }
}
