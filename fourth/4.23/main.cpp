/* черепашка Лого */
#include <iostream>
using namespace std;

struct Position
{
    Position() : x(0), y(0) {}
    int x;
    int y;
};

int main()
{
    bool pole[20][20] = { false }; // поле, по которому передвигается черепашка
    bool pero = false; // false - перо вверху, true - перо внизу
    int curCom = 0;    // текущая комманда
    Position curPos;   // текущая позиция
    int next = 1;      // направление
    		       // 0 - вверх, 1 - вправо, 2 - вниз, 3 - влево

    cin >> curCom;
    while(curCom != 9) // 9 - выход
    {
	switch(curCom)
	{
	case 1: // перо вверху
	    pero = false;
	    break;
	case 2: // перо внизу
	    pero = true;
	    break;
	case 3: // поворачиваем направо
	    if(next == 3) next = 0;
	    else ++next;
	    break;
	case 4:
	    if(next == 0) next = 3;
	    else --next;
	    break;
	case 5:
	    int offset;
	    cin >> offset; // считываем смещение
	    if(next == 0) // изящней не придумал :)
	    {
		if(pero)
		    while(offset--)
			pole[curPos.x][curPos.y--] = true;
		else
		    curPos.y -= offset;
	    }
	    else if(next == 1)
	    {
		if(pero)
		    while(offset--)
			pole[curPos.x++][curPos.y] = true;
		else
		    curPos.x += offset;
	    }
	    else if(next == 2)
	    {
		if(pero)
		    while(offset--)
			pole[curPos.x][curPos.y++] = true;
		else
		    curPos.y += offset;
	    }
	    else
	    {
		if(pero)
		    while(offset--)
			pole[curPos.x--][curPos.y] = true;
		else
		    curPos.x -= offset;
	    }
	    break;
	case 6: // выводим массив
	    for(int i=0; i<20; ++i)
	    {
		for(int j=0; j<20; ++j)
		{
		    if(pole[i][j])
			cout << "* ";
		    else
			cout << "  ";
		}
		cout << endl;
	    }
	    break;
	}
	cin >> curCom; // получаем слудующую комманду
    }

    return 0;
}

