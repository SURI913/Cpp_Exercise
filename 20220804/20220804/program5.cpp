#include <iostream>
using namespace std;
const int N = 3;

void sayHello(int n = 1) {		//매개변수가  없으면 1번 출력
	for (int i = 0; i < n; i++) {
		cout << "Hello ";		//Hello 출력
	}
}

int main() {
	cout << "sayHello( )->";	//매개변수x
	sayHello();
	cout << endl;

	cout << "sayHello(" << N << ")->";	//매개변수o
	sayHello(N);
	return 0;
 }

