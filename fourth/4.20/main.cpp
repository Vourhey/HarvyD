#include <iostream>
using namespace std;

int main()
{
    short curK = 0, curNK = 5; // текущие свободные места
    short otvet = 0;

    // решение "влоб"
    // даже без массива
    while(true)
    {
	cout << "Введите, пожалуйста, 1 для \"курящих\"\n"
		"Введите, пожалуйста, 2 для \"некурящих\"\n";
	cin >> otvet;

	if(otvet == 1)
	{
	    if(curK != 5)
	    {
		cout << "Ваше место в салоне для курящих "
		     << (curK + 1) << endl;
		++curK;
	    }
	    else
	    {
		cout << "Салон для курящих заполнен.\n"
			"Устроит ли вас место в салоне для некурящих?\n"
			"(1 - да, 2 - нет) ";
		cin >> otvet;
		if(otvet == 1)
		{
		    if(curNK != 10)
		    {
			cout << "Ваше место в салоне для некурящих "
			     << (curNK + 1) << endl;
			++curNK;
		    }
		    else
		    {
			cout << "Все места заняты.\n"
				"Следующий полет состоится через три часа.\n";
			break;
		    }
		}
	    }
	}
	else if(otvet == 2)
	{
	    if(curNK != 10)
	    {
		cout << "Ваше место в салоне для некурящих "
			<< (curNK + 1) << endl;
		++curNK;
	    }
	    else
	    {
		cout << "Все места заняты.\n"
                        "Следующий полет состоится через три часа.\n";
		break;
	    }
	}
    }

    return 0;
}

