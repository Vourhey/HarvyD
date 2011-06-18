/* Программа подсчета расхода бензина */
#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double b = 0.0;
    double pt = 0.0;
    double sum = 0.0;
    int c = 0;

    cout.setf(ios::fixed, ios::floatfield);
    while(true)
    {
	cout << "Введите расход бензина (-1, если ввод закончен): ";
	cin >> b;
	if(b == -1) break;
	cout << "Введите пройденный путь: ";
	cin >> pt;
	sum += pt / b;
	++c;
	cout << "Для этой емкости получено километров/литр "
	     << pt / b << endl;
    }
    cout << "Средний расход бензина " << sum / c << endl;

    return 0;
}

