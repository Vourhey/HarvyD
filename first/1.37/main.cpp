#include <iostream>
using namespace std;

int main()
{
    cout << "число\tквадрат\tкуб\n";

    for(int i=0; i<11; ++i)
	cout << i << '\t' << i*i << '\t' << i*i*i << '\n';

    return 0;
}

