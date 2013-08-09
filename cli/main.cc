#include <iostream>
#include "xgclient.h"
//#include <string.h>

using namespace std;
using namespace xget;

int main(int argc, char **argv)
{
        if (argc == 1) {
                cout << "usage: xget <url>" << endl;
                return 0;
        }

        const char *url = argv[1];
        
        xgclient *cli = new xgclient(url);
        cli->download();
        delete cli;
        
        return 0;
}
