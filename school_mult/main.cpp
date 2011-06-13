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
typedef map<char*, uint> my_map;

inline void help()
{
    cout << "SchoolMult v2.2\n"
	    "Смысл игры в том, чтобы правильно считать примеры.\n"
	    "Доступны три уровня сложности: low, mid, hard.\n"
	    "Любой из них можно указать после имени программы.\n"
	    "Для выхода введите -1.\n";
}

/*
void loadtable(map<char*, uint> *m, fstream *s)
{
    cerr << "Load Table\n";
    char name[10] = {'\0'};
    uint score = 0;

    for(int i=0; i<10; ++i)
    {
	s->read(name, 10);
	s->read((char*)&score, 4);
	cerr << name << " - " << score << '\n';
	m->insert(pair<char*, uint>(name, score));
    }
}

class map_comp
{
public:
    bool operator()(pair<char*, uint> p1, pair<char*, uint> p2)
    { return p1.second < p2.second; }
} map_obj;

void my_swap(pair<char*const,uint> &p1, pair<char*const,uint> &p2)
{
    swap(p1.second, p2.second);

    char n[10];
    memcpy(n, p1.first, 10);
    memcpy(p1.first, p2.first, 10);
    memcpy(p2.first, n, 10);
}

void my_sort(my_map::iterator begin, my_map::iterator end, map_comp &comp)
{
    while(begin != end)
    {
	my_map::iterator t = begin; 
	++t;
	while(t != end)
	{
	    if(comp(*begin, *t))
		my_swap(*begin, *t);
	    ++t;
	}
	++begin;
    }
}

void savetable(my_map *m, fstream *s)
{
    cerr << "Save Table\n";
    s->seekg(0, ios::beg);

    my_sort(m->begin(), m->end(), map_obj);

    int i=0;    
    for(my_map::iterator it = m->begin(); it != m->end(); ++it)
    {
	s->write(it->first, 10);
	s->write((char*)&it->second, 4);
	if(i == 9) // записываем только 10 значений
	    break; 
	++i;
    }
}

void insert_in_table(my_map *m, int score)
{
    char name[10] = {'\0'};
    cout << "Введите ваше имя: ";
    cin.getline(name, 10);
    
    m->insert(pair<char*, uint>(name, score));
}
*/

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
/*    fstream table("table", fstream::in | fstream::out | fstream::binary);
    my_map tmap;

    if(!table.is_open())
	cout << "Warning: файл результатов не открыт\n";

    loadtable(&tmap, &table); */

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
//		insert_in_table(&tmap, yes_counter);
		break;
	    }

	    cout << no[rand() % 4];
	    goto otvet;   // никогда не пользовался goto :)
	}
    }
/*
    savetable(&tmap, &table);
    table.close(); */

    return 0;
}

