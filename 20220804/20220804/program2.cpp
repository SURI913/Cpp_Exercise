#include <iostream>
using namespace std;

inline double calc_volume(double r, double pi = 3.14) {	//pi값을 디폴트로 지정
	return (4.0 / 3.0 * pi * pow(r, 3));
}	//디폴트 값이 달렸을 땐 메인함수 앞에다가 선언

int main() {
	double radius;
	cout << "반지름을 입력하시오: ";
	cin >> radius;

	cout << "구의 부피는 " << calc_volume(radius) << endl;
	return 0;
}

