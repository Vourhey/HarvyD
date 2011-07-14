#include <iostream>
using namespace std;

long long integerPower(long base, long exp)
{
    if(exp == 0) return 1;

    long long ret = base;

    while(exp-- != 1)
	ret = ret * base;

    return ret;
}

int main()
{
    long b, e;
    cout << "Введите целое число и степень числа: ";
    cin >> b >> e;
    cout << integerPower(b, e) << endl;
    return 0;
}

