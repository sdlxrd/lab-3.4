// Lab_3_4.cpp
// ����������� �������
// ����������� ������ � 3.4
// ������������, ������ ������� �������.
// ������ 14
#include <iostream>
using namespace std;
int main()
{
	double R1;
	double R2;
	double x;
	double y;

	setlocale(LC_CTYPE, "ukr");
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;
	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;
	if ((((R1 * R1) >= (x * x) + (y * y)) && (R2 * R2 <= (x * x) + (y * y))) && (x <= 0) && (y <= 0) or ((R1 * R1 >= (x * x )+ (y * y)) && (R2 * R2 <= (x * x) + (y * y))) && (x >= 0) && (y >= 0))
	cout << "���" << endl;
	else cout << "�i" << endl;
	cin.get();
	return 0;
}