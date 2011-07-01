#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char **argv)
{
    if(argc != 2) return 1;
    int side = atoi(argv[1]);

    for(int i=0; i<side; ++i)
    {
	for(int j=0; j<side; ++j)
	    cout << "* ";
	cout << endl;
    }
    return 0;
}

