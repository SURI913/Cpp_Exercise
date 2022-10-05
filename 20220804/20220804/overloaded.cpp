#include<iostream>
using namespace std;

//정수값을 제곱하는 함수
int square(int i) {
	cout << "square(int) 호출" << endl;
	return i * i;
}

//실수값을 제곱하는 함수
double square(double i) {
	cout << "square(double) 호출" << endl;
	return i * i;
}
int main() {
	cout << square(10) << endl;
	cout << square(2.0) << endl;
	return 0;
}