#include <iostream>
using namespace std;

long secSince12(int h, int m, int s)
{
    if(h >= 12) h -= 12;

    return (s + 60 * m + 3600 * h);
}

int main()
{
    int h, m, s;
    cout << "Введите часы, минуты и секунды через пробел: ";
    cin >> h >> m >> s;

    // проверка
    if(h > 23 || h < 0)
    {
	cout << "Часы должны быть от 0 до 23\n";
	return 1;
    }
    if(m > 59 || m < 0)
    {
	cout << "Минуты должны быть от 0 до 59\n";
	return 1;
    }
    if(s > 59 || s < 0)
    {
	cout << "Секунды должны быть от 0 до 59\n";
	return 1;
    }

    cout << secSince12(h, m, s) << " прошло секунд с 12\n";
    return 0;
}

