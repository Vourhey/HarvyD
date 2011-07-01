#include <iostream>
using namespace std;

int perfect(int number)
{
    int sum = 0;
    for(int i=1; i<number; ++i)
    {
	if(!(number % i)) sum += i;
    }
    if(number == sum) return number;
    return -1; // означает, что не совершенное число
}

int main()
{
    for(int i=1; i<=1000; ++i)
    {
	if(perfect(i) != -1)
	    cout << i << endl;
    }
    return 0;
}
