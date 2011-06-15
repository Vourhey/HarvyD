#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char **argv)
{
    if(argc != 6) return 1;

    int a1 = atoi(argv[1]);
    int a2 = atoi(argv[2]);
    int a3 = atoi(argv[3]);
    int a4 = atoi(argv[4]);
    int a5 = atoi(argv[5]);

    int min = a1;
    if(a2 < min) min = a2;
    if(a3 < min) min = a3;
    if(a4 < min) min = a4;
    if(a5 < min) min = a5;

    cout << "Наименьшее: " << min << endl;

    int max = a1;
    if(a2 > max) max = a2;
    if(a3 > max) max = a3;
    if(a4 > max) max = a4;
    if(a5 > max) max = a5;

    cout << "Наибольшее: " << max << endl;
    return 0;
    
}

