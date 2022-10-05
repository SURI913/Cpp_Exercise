#include <iostream>
using namespace std;
int main()
{
	int a, b, c, largest;
	cout << "3개의 큰 정수를 입력하시오: ";
	cin >> a >> b >> c;
	if (a >= b && a >= c)
		cout << "가장 큰 정수는 " << a;
	else if (b >= a && b >= c)
		cout << "가장 큰 정수는 " << b;
	else
		cout << "가장  큰 정수는 " << c;
	return 0;
}