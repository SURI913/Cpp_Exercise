#include <iostream>
using namespace std;

int prime(int);

int main() {
	for (int i = 2; i < 101; i++) {
		if (prime(i) == 1)	//소수 확인
			cout <<i<<" ";	//소수 출력
	}
	return 0;
}

int prime(int n) {
	int last = n / 2;	// 2부터 n/2
	for (int i = 2; i < last; i++) {	//n/2 보다 큰 수는 약수 x
		if (n % i == 0)
			return 0;		//소수아님
	}
	return 1;
}