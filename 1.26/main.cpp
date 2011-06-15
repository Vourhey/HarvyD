#include <iostream>
using namespace std;

double min(double a1, double a2, double a3)
{
    double m = a1;
    if(a2 < m) m = a2;
    if(a3 < m) m = a3;
    return m;
}

double max(double a1, double a2, double a3)
{
    double m = a1;
    if(a2 > m) m = a2;
    if(a3 > m) m = a3;
    return m;
}

int main()
{
    double n1, n2, n3;

    cout << "Введите три числа: ";
    cin >> n1 >> n2 >> n3;

    cout << "Сумма равна " << (n1 + n2 + n3) << endl;
    cout << "Среднее значение равно " << ((n1+n2+n3)/3) << endl;
    cout << "Произведение равно " << (n1 * n2 * n3) << endl;
    cout << "Наименьшее равно " << min(n1, n2, n3) << endl;
    cout << "Наибольшее равно " << max(n1, n2, n3) << endl;

    return 0;
}

