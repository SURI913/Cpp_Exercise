#include <iostream>
using namespace std;
int max(int, int);
int main() {
	int n;
	n = max(2, 3);	//�Լ� ȣ��
	cout << "���� ��� = " << n << endl;
	return 0;
}

int max(int x, int y) {
	if (x > y)
		return x;
	else
		return y;
}