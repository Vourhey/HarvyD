#include <iostream>
using namespace std;

double calculateCharges(double hours)
{
    if(hours <= 3.0) // до трех часов
	return 2.00;

    double charges = 2.00;
    hours -= 3;
    // учитываем неполные часы
    int t = int(hours);
    if(t != hours) hours += 1;

    charges += int(hours) * 0.5;
    if(charges > 10.00) return 10.00;
    return charges;
}

int main()
{
    double a1, a2, a3;
    double p1, p2, p3;
    cout << "Введи количество часов для каждого из трех автомобилей: ";
    cin >> a1 >> a2 >> a3;

    p1 = calculateCharges(a1);
    p2 = calculateCharges(a2);
    p3 = calculateCharges(a3);

    double plata = p1 + p2 + p3;
    double hours = a1 + a2 + a3;

    cout << "Автомобиль\tЧасы\tПлата\n"	
	 << "1\t\t" << a1 << '\t' << p1 << '\n'
	 << "2\t\t" << a2 << '\t' << p2 << '\n'
	 << "3\t\t" << a3 << '\t' << p3 << '\n'
	 << "Итого\t\t" << hours << '\t' << plata << '\n';
    return 0;
}

