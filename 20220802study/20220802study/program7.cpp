#include<iostream>
using namespace std;

int main()
{
	double r, A, V;
	cout << "반지름: ";
	cin >> r;

	//표면적 계산
	A = 4.0 * 3.141592 * pow(r, 2);

	//부피 계산
	V = (4.0 / 3.0) * 3.141592 * pow(r, 3);

	cout << "표면적: " << A << endl;
	cout << "부피: " << V << endl;
	return 0;
}