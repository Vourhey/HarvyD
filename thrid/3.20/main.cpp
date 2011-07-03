#include <iostream>
using namespace std;

bool multiple(long a1, long a2)
{
    return !(a2 % a1);
}

int main()
{
    long i1, i2;

    while(true)
    {
	cout << "Введите два числа (-1 для выхода): ";
	cin >> i1;
	if(i1 == -1)
	    break;
	cin >> i2;
	cout << "Число " << i2
	     << (multiple(i1, i2) ? " кратно " : " не кратно ")
	     << "числу " << i1 << endl;
    }
    return 0;
}

