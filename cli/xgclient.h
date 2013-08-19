#ifndef __XGCLIENT__
#define __XGCLIENT__

#include <vector>

using namespace std;

namespace xget {
        class XgClient
        {
                private :
                        vector<string> serverList;
                public:
                        XgClient();
                        ~XgClient();
                        void Download(const char *url);
                        void GetAvailableServerList();
        };
}
#endif
