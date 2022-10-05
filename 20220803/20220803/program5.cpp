#include<iostream>
using namespace std;
int main() {
	int i;
	int sum = 0;
	do {
		cout << "정수를 입력하시오: ";
		cin >> i;
		sum += i;
	} while (i != 0);

	cout << "합계 = " << sum << endl;
	return 0;
}