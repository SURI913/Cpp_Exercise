#include<iostream>
#include<string>
using namespace std;

int main() {
	string frist, second;
	cout << "ù ��° ���ڿ�: ";
	cin >> frist;
	cout << "�� ��° ���ڿ�: ";
	cin >> second;

	if (frist == second)
		cout << "2���� ���ڿ��� �����ϴ�." << endl;
	else
		cout << "2���� ���ڿ��� �ٸ��ϴ�." << endl;
	return 0;
}