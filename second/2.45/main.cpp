#include <iostream>
using namespace std;

int f(int i)
{
    int ret = i;
    while(i != 1)
	ret *= --i;
    return ret;
}

int main()
{
    cout << f(1) << endl;
    cout << f(2) << endl;
    cout << f(3) << endl;
    cout << f(4) << endl;
    cout << f(5) << endl;
    cout << f(10) << endl;
    return 0;
}

