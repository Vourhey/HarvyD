#include <iostream>
using namespace std;

int main()
{
    int sum = 0;
    int count = 0;
    int cur = 0;

    cin >> cur;
    while(cur !=  9999)
    {
	sum += cur;
	++count;
	cin >> cur;
    }
    cout << "Среднее значение " << sum / count << endl;
    return 0;
}

