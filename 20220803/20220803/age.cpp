#include <iostream>
using namespace std;
int main()
{
	int age;
	cout << "���̸� �Է��Ͻÿ�: ";
	cin >> age;
	if (age <= 12)
		cout << "����Դϴ�.";
	else if (age <= 19)
		cout << "û�ҳ��Դϴ�.";
	else
		cout << "�����Դϴ�.";
	return 0;
}