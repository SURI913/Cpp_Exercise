#include <iostream>
using namespace std;

int prime(int);

int main() {
	for (int i = 2; i < 101; i++) {
		if (prime(i) == 1)	//�Ҽ� Ȯ��
			cout <<i<<" ";	//�Ҽ� ���
	}
	return 0;
}

int prime(int n) {
	int last = n / 2;	// 2���� n/2
	for (int i = 2; i < last; i++) {	//n/2 ���� ū ���� ��� x
		if (n % i == 0)
			return 0;		//�Ҽ��ƴ�
	}
	return 1;
}