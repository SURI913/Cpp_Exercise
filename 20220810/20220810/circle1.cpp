#include <iostream>
using namespace std;

class Circle {
public:
	int radius; //반지름
	string color; //색상

	double calcArea() {
		return 3.14 * radius * radius;
	}
};

int main()
{
	Circle obj, obj2;

	obj.radius = 100;
	obj.color = "bule";
	cout << "원의 면적=" << obj.calcArea() << "\n";

	obj.radius = 200;
	obj.color = "white";
	cout << "원의 면적=" << obj.calcArea() << '\n';
	return 0;
}