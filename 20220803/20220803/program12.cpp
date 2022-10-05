#include <iostream>
using namespace std;

int main() {
	for (int i = 1; i <= 100; i++) {
		if (i % 3 == 0) {	//3-6-9 조건
			cout << "박수 ";
		}
		else
			cout << i << " ";	//아닐때 출력
	}
	return 0;
}