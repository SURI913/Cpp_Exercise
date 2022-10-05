#include<iostream>
using namespace std;

void print(int i) {
	cout << "정수 출력: " << i << endl;
}

void print(double f) {
	cout << "실수 출력: " << f << endl;
}

void print(char c) {
	cout << "문자 출력: " << c << endl;
}

int main() {
	print(100);
	print(3.14);
	print('C');
	return 0;
}