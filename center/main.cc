#include <stdio.h>
#include <stdlib.h>
#include <sys/socket.h>
#include "xgcenter.h"
#include <iostream>

using namespace std;
using namespace xget;

int main(int argc, char **argv)
{
        XgCenter *c = new XgCenter();
        c->Initialize();
        cout << "xget center server started ..." << endl;
        c->Run();

        return 0;
}
