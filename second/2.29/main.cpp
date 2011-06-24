#include <iostream>
using namespace std;

int main()
{
    int number;

    cout << "Введите число: ";
    cin >> number;

    if(number < 10000 || number > 99999)
    {
	cout << "Число должно быть пятизначным\n";
	return 1;
    }

    int i1, i2, i3, i4;

    i1 = number / 10000;     // первая цифра
    i2 = number / 1000 % 10; // вторая цифра
    i3 = number / 10 % 10;   // четвертая
    i4 = number % 10;	     // последняя
    if(i1 == i4 && i2 == i3)
	cout << "Число " << number << " является палиндромом\n";
    else
	cout << "Число " << number << " не палиндром\n";
    return 0;
}

