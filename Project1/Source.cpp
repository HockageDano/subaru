// Lab_02.cpp
// Rekhtman Mykhailo
// ����������� ������ � 2.
// ˳��� ��������.
// ������ 23
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // ������� ��������
	//double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������
	cout << "x = "; cin >> x;
	//z1 = (sin(2.0 * x) + sin(5.0 * x) - sin(3.0 * x)) / (cos(x) + 1.0 - (2.0 * (sin(2.0 * x) * sin(2.0 * x))));
	z2 = 2.0 * sin(x);
	cout << endl;
	//cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}