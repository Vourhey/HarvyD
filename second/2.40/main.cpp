#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int i = 0;
    int cur = 0;

    cin >> i;
    while(i--)
    {
	cin >> cur;
	sum += cur;
    }

    cout << "Сумма " << sum << endl;
    return 0;
}

