#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char **argv)
{
    if(argc != 3) return 1;
    int side = atoi(argv[1]);
    char fillCh = argv[2][0];

    for(int i=0; i<side; ++i)
    {
	for(int j=0; j<side; ++j)
	    cout << fillCh << ' ';
	cout << endl;
    }
    return 0;
}

