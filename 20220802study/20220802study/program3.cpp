#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
	int x, y;
	cout << "첫 번째 변: ";
	cin >> x;
	cout << "두 번째 변: ";
	cin >> y;

	cout << endl;

	//빗변의 길이 계산
	cout << "빗변 길이: " << sqrt(x * x + y * y) << endl;
}