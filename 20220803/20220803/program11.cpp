#include <iostream>
using namespace std;

int main() {
	int n;
	cout << "n�� ���� �Է��Ͻÿ�: ";
	cin >> n;
	int sum = 0;
	for (int i = 1; i <= n; i++) {
		sum += i * i;
	}
	cout << "��갪�� " << sum << "�Դϴ�." << endl;
	return 0;
}