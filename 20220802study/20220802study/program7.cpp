#include<iostream>
using namespace std;

int main()
{
	double r, A, V;
	cout << "������: ";
	cin >> r;

	//ǥ���� ���
	A = 4.0 * 3.141592 * pow(r, 2);

	//���� ���
	V = (4.0 / 3.0) * 3.141592 * pow(r, 3);

	cout << "ǥ����: " << A << endl;
	cout << "����: " << V << endl;
	return 0;
}