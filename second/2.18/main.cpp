#include <iostream>
using namespace std;

int main()
{
    double n = 0.0;

    while(true)
    {
	cout << "Введите объем продаж (-1, если ввод закончен): ";
	cin >> n;
	if(n == -1) break;
	cout << "Заработок: " << 200 + n * 0.09 << "\n\n";
    }

    return 0;
}

