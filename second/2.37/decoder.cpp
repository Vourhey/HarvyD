/* Декодер */
#include <iostream>
#include <cstdlib>
using namespace std;

void my_swap(char &c1, char &c2)
{
    char ch = c1;
    c1 = c2;
    c2 = ch;
}

int main(int argc, char **argv)
{
    if(argc != 2) return 1;

    int number = atoi(argv[1]);
    if(number < 1000 || number > 9999)
    {
	cout << "Должно быть четырехзначное число\n";
	return 1;
    }

    char data[5] = { '\0' };
    for(int i=0; i<4; ++i) data[i] = argv[1][i]; // копируем

    my_swap(data[1], data[3]);
    my_swap(data[0], data[2]);

    for(int j=0; j<4; ++j)
	data[j] = (data[j] - '0' + 10 - 7) % 10 + '0';

    cout << data << endl;
    return 0;

}

