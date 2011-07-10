#include <iostream>
using namespace std;

int main()
{
    unsigned int number;
    cout << "> ";
    cin >> number;

    while(number != 0)
    {
	cout << char(number % 10 + '0');
	number /= 10;
    }
    cout << endl;

    return 0;
}

