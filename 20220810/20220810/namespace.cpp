#include<iostream>
#include <string>
using namespace std;

class Circle {
public:
	double calcArea();

	int radius;	//반지름
	string color;	//색상
};

//클래스 외부에서 멤버 함수들이 정의된다.
double Circle::calcArea() {
	return 3.14 * radius * radius;
}

int main()
{
	Circle c;
	c.radius = 10;
	cout << c.calcArea() << endl;
	return 0;
}