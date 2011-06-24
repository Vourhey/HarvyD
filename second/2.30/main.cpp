#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char **argv)
{
    int dec = 0;

    if(argc != 2) return 0;

    // начинаем с конца
    int len = strlen(argv[1]);
    char *data = argv[1] + len - 1;

    int i = 1;
    while(*data)
    {
	dec += (*data -	'0') * i;
	i *= 2;
	--data;
    }

    cout << dec << endl;

    return 0;
}

