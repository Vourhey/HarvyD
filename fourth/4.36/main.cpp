#include <iostream>
using namespace std;

void printArray(int *mas, int len)
{
    if(!len) return;

    cout << *mas << ' ';
    printArray(mas+1, --len);
}

int main()
{
    int m[5] = { 1, 4, 6, 2, 19 };
    printArray(m, 5);
    return 0;
}

