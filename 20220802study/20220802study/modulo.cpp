#include <iostream>
using namespace std;

int main()
{
	int money, candy_price;	//���� ���� ��, ���� ����
	cout << "���� ������ �ִ� ��: ";
	cin >> money;
	cout << "ĵ���� ����: ";
	cin >> candy_price;

	//�ִ��� �� �� �ִ� ���� ��
	cout << "�ִ�� �� �� �ִ� ĵ���� ���� = " << money/candy_price << endl;

	//������ �����ϰ� ���� ��
	cout << "ĵ�� ���� �� ���� �� = " << money % candy_price << endl;
	return 0;
}