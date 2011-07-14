#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char **argv)
{
    int i1 = 0, i2 = 0;
    int right, ot;

    srand(time(NULL)); // инициализируем генератор

    // воход -1
    while(true)
    {
	i1 = rand() % 10;
	i2 = rand() % 10;
	right = i1 * i2;

	cout << "Сколько будет " << i1 << " * " << i2 << "? ";
otvet:
	cin >> ot;

	if(ot == -1)
	    break;  // выход

	if(ot == right)
	    cout << "Очень хорошо!\n";
	else
	{
	    cout << "Нет. Повторите, пожалуйста, снова. ";
	    goto otvet;   // никогда не пользовался goto :)
	}
    }

    return 0;
}

