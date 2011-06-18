#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    if(argc != 2) return 1;

    const char *data = argv[1];

    cout << data[0] << "   " << data[1] << "   "
	 << data[2] << "   " << data[3] << "   "
	 << data[4] << endl;
    return 0;
}

