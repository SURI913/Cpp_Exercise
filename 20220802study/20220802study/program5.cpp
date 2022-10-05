#include<iostream>
using namespace std;
const double M = 3.3058;	//1평

int main() {
	float m;
	cout << "평: ";
	cin >> m;

	//평방미터 계산
	cout << "평방미터: " << m * M << endl;
	return 0;
}