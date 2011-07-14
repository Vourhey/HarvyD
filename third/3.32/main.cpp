#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char **argv)
{
    if(argc != 3) return 1;

    unsigned int number1 = atoi(argv[1]);
    unsigned int number2 = atoi(argv[2]);

    // использован алгоритм Евклида
    int nod = number1 % number2;

    while(nod != 0)
    {
	number1 = number2;
	number2 = nod;
	nod = number1 % number2;
    }

    cout << number2 << endl;
    return 0;
}

