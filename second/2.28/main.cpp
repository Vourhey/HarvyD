#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char **argv)
{
    if(argc != 2) return 1;

    int l = atoi(argv[1]);
    if(l < 1 || l > 20) return 1;

    if(l == 1) // частный случай
    {
	cout << "*\n";
	return 0;
    }

    int i;
    for(i=0; i<l; ++i) cout << '*'; // выводим первую строку
    cout << endl;
    for(i=0; i<(l-2); ++i) // строки вида [* spaces *]
    {
	cout << '*';
	for(int j=0; j<(l-2); ++j) cout << ' ';
	cout << "*\n";
    }
    for(i=0; i<l; ++i) cout << '*'; // заключительная строка
    cout << endl;

    return 0;
}

