/* Обучающая программа v2.5
 * Задает вопросы по умножению */
#include <fstream>
#include <map>
#include <algorithm>
#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

typedef unsigned int uint;

inline void help()
{
    cout << "SchoolMult v2.2\n"
	    "Смысл игры в том, чтобы правильно считать примеры.\n"
	    "Доступны три уровня сложности: low, mid, hard.\n"
	    "Любой из них можно указать после имени программы.\n"
	    "Для выхода введите -1.\n";
}

int main(int argc, char **argv)
{
    int level;
    int i1 = 0, i2 = 0;
    int right, ot;
    int yes_counter = 0;
    int errors = 0;

    const char *yes[4] = { "Очень хорошо!\n",
	    		   "Отлично!\n", 
			   "Чудесная работа!\n", 
			   "Продолжайте работать так же хорошо!\n" };
    const char *no[4] = { "Нет. Попытайтесь, пожалуйста, снова. ",
	    		  "Неверно. Попытайтесь ещё раз. ",
			  "Не опускайте руки! ",
			  "Нет. Продолжайте ваши попытки. " };

    srand(time(NULL)); // инициализируем генератор

    // уровен сложности
    level = 10;  // простой
    if(argc != 1)
    {
	// выводим справку
	if(!strcmp(argv[1], "--help"))
	{
	    help();
	    return 0;
	}

	if(!strcmp(argv[1], "hard"))
	    level = 1000; // сложный
	else if(!strcmp(argv[1], "mid"))
	    level = 100;  // средний
    }

    cin.exceptions(ios::failbit);
    // воход только по Ctrl-C
    while(true)
    {
	i1 = rand() % level;
	i2 = rand() % level;
	right = i1 * i2;

	cout << "Сколько будет " << i1 << " * " << i2 << "? ";
otvet:
	cin >> ot;

	if(ot == -1)
	    break;  // выход

	if(ot == right)
	{
	    cout << yes[rand() % 4];
	    ++yes_counter;
	    errors = 0;  // нужно, чтобы избежать "задолженностей"
	    		 // за предыдущие ошибки
	    
	    if(!(yes_counter % 5))
		level += 5; // через каждые 5 правильных ответов
	    		    // увеличиваем сложность
	}
	else
	{
	    ++errors;
	    if(errors == 3)  // три раза ошиблись
	    {
		cout << "Вы проиграли. Ваш счет " 
		     << yes_counter << '\n';
		break;
	    }

	    cout << no[rand() % 4];
	    goto otvet;   // никогда не пользовался goto :)
	}
    }

    return 0;
}

