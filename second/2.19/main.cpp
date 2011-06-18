#include <iostream>
using namespace std;

int main()
{
    int hours;
    double stavka;

    while(true)
    {
	cout << "Введите число рабочих часов "
		"(-1, если ввод закончен): ";
	cin >> hours;
	if(hours == -1) break;
	cout << "Введите почасовую ставку "
		"работника ($00.00): ";
	cin >> stavka;

	double z = hours * stavka;

	if(hours > 40) z += 0.5 * (hours - 40) * stavka;
	cout << "Зарплата: " << z << endl;
    }

    return 0;    
}

