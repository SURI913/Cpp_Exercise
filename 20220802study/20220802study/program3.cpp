#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
	int x, y;
	cout << "ù ��° ��: ";
	cin >> x;
	cout << "�� ��° ��: ";
	cin >> y;

	cout << endl;

	//������ ���� ���
	cout << "���� ����: " << sqrt(x * x + y * y) << endl;
}