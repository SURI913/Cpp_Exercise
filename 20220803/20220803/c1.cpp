#include <iostream>
using namespace std;
int main()
{
	int x, y;
	cout << "x값을 입력하시오: ";
	cin >> x;
	cout << "y값을 입력하시오: ";
	cin >> y;
	if (x > y)
		cout << "x가 y보다 큽니다";
	else
		cout << "y가 x보다 큽니다";
	return 0;
}