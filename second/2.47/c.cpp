#include <iostream>
using namespace std;

int main()
{
    for(int i=10; i>0; --i)
    {
	for(int g=10-i; g>0; --g)
	    cout << ' ';
	for(int j=i; j>0; --j)
	    cout << '*';
	cout << endl;
    }
    return 0;
}
