#include<iostream>
using namespace std;
int main() {
	int i;
	int sum = 0;
	do {
		cout << "������ �Է��Ͻÿ�: ";
		cin >> i;
		sum += i;
	} while (i != 0);

	cout << "�հ� = " << sum << endl;
	return 0;
}