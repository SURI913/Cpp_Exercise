#include <iostream>
using namespace std;
int main()
{
	int a, b, c, largest;
	cout << "3���� ū ������ �Է��Ͻÿ�: ";
	cin >> a >> b >> c;
	if (a >= b && a >= c)
		cout << "���� ū ������ " << a;
	else if (b >= a && b >= c)
		cout << "���� ū ������ " << b;
	else
		cout << "����  ū ������ " << c;
	return 0;
}