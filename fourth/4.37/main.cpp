#include <iostream>
using namespace std;

void stringReverse(char *str)
{
    if(*str == '\0') return;

    stringReverse(str+1);
    cout << *str;
}

int main()
{
    char string[] = "Hello, from main!";
    stringReverse(string);
    return 0;
}

