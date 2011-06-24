#include <iostream>
#include <cstdlib>
using namespace std;

void my_swap(char &c1, char &c2)
{
    char tmp = c1;
    c1 = c2;
    c2 = tmp;
}

int main(int argc, char **argv)
{
    if(argc != 2) return 0;

    int number = atoi(argv[1]);
    if(number < 1000 || number > 9999)
    {
	cout << "Должно быть четырехзначное число\n";
	return 0;
    }

    char *in = argv[1];
    char data[4] = { '\0' };

    for(int i=0; i<4; ++i)
    {
	data[i] = (*in++ - '0' + 7) % 10 + '0';
    }

    my_swap(data[0], data[2]);
    my_swap(data[1], data[3]);
    cout << data << endl;
    return 0;
}

