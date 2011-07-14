#include <iostream>
#include <cmath>
using namespace std;

bool simpleInt(unsigned long i)
{
    if(i <= 3) return true;

    for(unsigned int j = 2; j <= sqrt(i); ++j)
	if(!(i % j))
	    return false;

    return true;				
}

int main()
{
    for(unsigned long i = 1; i <= 10000; ++i)
	if(simpleInt(i))
	    cout << i << endl;
    return 0;
}

