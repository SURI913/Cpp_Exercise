#include <iostream>
using namespace std;
int square(int);

int main() {
	int n;
	cout << "������ ������ �Է��Ͻÿ�: ";
	cin >> n;

	cout << square(n) << endl;
	return 0;
}

int square(int n) {
	return (n * n);
}