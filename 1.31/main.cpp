#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char **argv)
{
    if(argc != 2) return 1;

    int number = atoi(argv[1]);

    cout << (number % 2 ? "Нечетное\n" : "Четное\n");
    return 0;
}

