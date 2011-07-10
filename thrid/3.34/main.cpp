#include <iostream>
#include <cstdlib>
using namespace std;

// только 0 или 1, поэтому достаточно bool
bool flip()
{
    return rand() % 2;
}

int main()
{
    srand(time(NULL));

    int orel = 0, reshka = 0;

    for(int i=0; i<100; ++i)
    {
	if(flip()) ++orel;
	else     ++reshka;
    }

    cout << "Орел\tРешка\n"
	 << orel << '\t' << reshka << endl;
    return 0;
}

