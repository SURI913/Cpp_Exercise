#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {	//3-6-9 ����
			cout << "�ڼ� ";
		}
		else
			cout << i << " ";	//�ƴҶ� ���
	}
	return 0;
}