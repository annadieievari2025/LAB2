// Lab_02.cpp
// ĺ��� ����
// ����������� ������ � 2.1
// ˳��� ��������.
// ������ 8
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	//double Pi = 4 * atan(1.); // ����� �

	double x; // ������� ��������
	double z1; // ��������� ���������� 1-�� ������
	double z2; // ��������� ���������� 2-�� ������

	cout << "x = "; cin >> x;
	z1 = 1. / 2 * (sin(Pi) + cos(Pi)) * x;
	z2 = -x / 2;
	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}