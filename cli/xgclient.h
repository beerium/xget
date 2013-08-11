#ifndef __XGCLIENT__
#define __XGCLIENT__

namespace xget {
        class XgClient
        {
                public:
                        XgClient();
                        ~XgClient();
                        void Download(const char *url);
        };
}
#endif
