/* Игра "Угадай число" v1.0 */
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    srand(time(NULL)); // инициализируем генератор
    int number = rand() % 1000;
    int otvet;
    int c = 0;

    cout << "Мое число между 1 и 1000.\n"
	    "Вы можете его отгадать?\n"
	    "Пожалуйста, напечатайте вашу догадку: ";

    while(true)
    {
	cin >> otvet;

	if(otvet == number)
	{
	    cout << "Отлично! Вы отгадали число за " << c << " попыток.\n";

	    if(c < 10) cout << "Или вы знаете секрет, или вы счастливчик! :)\n";
	    else if(c == 10) cout << "Очевидно, вы знаете секрет!\n";
	    else cout << "Вы должны развивать свои способности!\n";

	    c = 0;
	    
	    cout << "Хотели бы вы сыграть ещё раз (y или n)? ";
	    char ch;
	    cin >> ch;
	    if(ch == 'n')
		break;
	    else
	    {
		number = rand() % 1000;
		cout << "Я загадал число. Ваша догадка: ";
	    }
	}
	else if(otvet < number)
	    cout << "Слишком мало. Попытайтесь снова: ";
	else
	    cout << "Слишком много. Попытайтесь снова: ";
	++c;
    }

    return 0;
}

