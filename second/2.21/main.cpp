#include <iostream>
using namespace std;

int main()
{
    cout << "N\t10*N\t100*N\t1000*N\n\n";

    for(int n=1; n<6; ++n)
	cout << n << '\t' << 10*n << '\t'
	     << 100*n << '\t' << 1000*n << '\n';

    return 0;
}

