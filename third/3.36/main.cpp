#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char **argv)
{
    int i1 = 0, i2 = 0;
    int right, ot;

    const char *yes[4] = { "Очень хорошо!\n",
	    		   "Отлично!\n", 
			   "Чудесная работа!\n", 
			   "Продолжайте работать так же хорошо!\n" };
    const char *no[4] = { "Нет. Попытайтесь, пожалуйста, снова. ",
	    		  "Неверно. Попытайтесь ещё раз. ",
			  "Не опускайте руки! ",
			  "Нет. Продолжайте ваши попытки. " };

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
	    cout << yes[rand() % 4];
	else
	{
	    cout << no[rand() % 4];
	    goto otvet;   // никогда не пользовался goto :)
	}
    }

    return 0;
}

