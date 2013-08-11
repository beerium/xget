#ifndef __UTILS_H__
#define __UTILS_H__

namespace xget
{
        int getipbyname(const char *name, char *ret);
        int gethostnamebyurl(const char *url, char *ret);
}
#endif
