// Lab_02.cpp
// Rekhtman Mykhailo
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 23
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний параметр
	//double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "x = "; cin >> x;
	//z1 = (sin(2.0 * x) + sin(5.0 * x) - sin(3.0 * x)) / (cos(x) + 1.0 - (2.0 * (sin(2.0 * x) * sin(2.0 * x))));
	z2 = 2.0 * sin(x);
	cout << endl;
	//cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}