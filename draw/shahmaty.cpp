/* печатает шахматную доску */
#include <iostream>
using namespace std;

int main()
{
    for(int i=1; i<=8; ++i)
    {
	if(i % 2) cout << "* * * * * * * *\n";
	else cout << " * * * * * * * *\n";
    }
    return 0;
}

