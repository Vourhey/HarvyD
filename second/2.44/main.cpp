#include <iostream>
using namespace std;

int main()
{
    unsigned int mult = 1;
    for(int i=1; i<=15; i += 2)
	mult *= i;
    cout << "Произведение равно " << mult << endl;
    return 0;
}
