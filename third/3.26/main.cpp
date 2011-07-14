#include <iostream>
using namespace std;

long secSince12(int h, int m, int s)
{
    if(h >= 12) h -= 12;

    return (s + 60 * m + 3600 * h);
}

bool check(int h, int m, int s)
{
    // проверка
    if(h > 23 || h < 0)
    {
	cout << "Часы должны быть от 0 до 23\n";
	return false;
    }
    if(m > 59 || m < 0)
    {
	cout << "Минуты должны быть от 0 до 59\n";
	return false;
    }
    if(s > 59 || s < 0)
    {
	cout << "Секунды должны быть от 0 до 59\n";
	return false;
    }
    return true;
}

int main()
{
    int h, m, s;
    cout << "Введите первое время: ";
    cin >> h >> m >> s;

    if(!check(h, m, s)) return 1;

    long first = secSince12(h, m, s);
    cout << "Введите второе время: ";
    cin >> h >> m >> s;
    if(!check(h, m, s)) return 1;

    cout << "Между ними " << secSince12(h, m, s) - first << " секунд\n";
    return 0;
}

