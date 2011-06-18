#include <iostream>
using namespace std;

int main()
{
    int counter = 0, number, largest = 0;

    cout << "Введите 10 чисел (каждое число с новой строки): ";

    while(counter != 10)
    {
	cin >> number;
	if(number > largest) largest = number;
	++counter;
    }

    cout << "Максимальное: " << largest << endl;

    return 0;
}

