#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int z[11] = {0};
    int k1, k2;

    srand(time(NULL));

    for(int i=0; i<36000; ++i)
    {
	k1 = rand() % 6 + 1;
	k2 = rand() % 6 + 1;

	++z[k1 + k2 - 2];
    }

    cout << "Сумма\tКоличество\n";
    for(int j=0; j<11; ++j)
	cout << (j + 2) << '\t' << z[j] << endl;
    return 0;
}

