#include <iostream>

using namespace std;


int main(int argc, char **argv)
{
        if (argc == 1) {

                cout << "usage: xget <url>" << endl;
        } else {
                cout << argv[1] << endl;
        }
}
