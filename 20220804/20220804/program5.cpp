#include <iostream>
using namespace std;
const int N = 3;

void sayHello(int n = 1) {		//�Ű�������  ������ 1�� ���
	for (int i = 0; i < n; i++) {
		cout << "Hello ";		//Hello ���
	}
}

int main() {
	cout << "sayHello( )->";	//�Ű�����x
	sayHello();
	cout << endl;

	cout << "sayHello(" << N << ")->";	//�Ű�����o
	sayHello(N);
	return 0;
 }

