#include<iostream>
using namespace std;
int main() {
	int a = 0;
	int b = 1;
	int c, n;
	cout << "�� �ױ��� ���ұ��: ";
	cin >> n;
	cout << a << ' ';
	for (int i = 0; i < n-1; i++) {
		c = a + b;
		a = b;
		b = c;
		cout << a << ' ';
	}
	return 0;
}