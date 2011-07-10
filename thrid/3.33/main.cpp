#include <iostream>
using namespace std;

int qualityPoints(int o)
{
    if(o >= 90 && o <= 100)
	return 4;
    if(o >= 80) // от 90 поймаем в первом случае
	return 3;
    if(o >= 70)
	return 2;
    if(o >= 60)
	return 1;
    return 0;
}

int main()
{
    int o;
    cout << "Введите среднюю оценку студента: ";
    cin >> o;
    cout << qualityPoints(o) << endl;
    return 0;
}

