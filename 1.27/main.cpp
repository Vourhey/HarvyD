#include <iostream>
using namespace std;

int main()
{
    double r = 0.0;
    const double pi = 3.14159;

    cout << "Введите радиус: ";
    cin >> r;

    cout << "Диаметр:          " << 2 * r << endl;
    cout << "Длина окружности: " << 2 * pi * r << endl;
    cout << "Площадь:          " << pi * r * r << endl;
    return 0;
}

