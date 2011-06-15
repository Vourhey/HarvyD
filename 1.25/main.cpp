#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char **argv)
{
    if(argc != 3)
	return 1;

    int n1 = atoi(argv[1]);
    int n2 = atoi(argv[2]);

    if( n1 == n2 )
    {
	cout << "Эти числа равны\n";
	return 0;
    }

    cout << (n1 > n2 ? n1 : n2) << " больше\n";
    return 0;
}

