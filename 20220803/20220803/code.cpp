#include <iostream>
using namespace std;
int main()
{
	char secret_code='h';
	char code;
	cout << "����ڵ带 ���纸����: ";
	cin >> code;
	if (code > secret_code)
		cout << code << "�տ� ����";
	else if (code < secret_code)
		cout << code << "�ڿ� ����";
	else
		cout << "���߾����ϴ�";
	return 0;
}