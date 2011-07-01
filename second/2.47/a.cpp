#include <iostream>
using namespace std;

int main()
{
    for(int i=1; i<=10; ++i)
    {
	for(int j=i; j>0; --j)
	    cout << '*';
	cout << endl;
    }
    return 0;
}
