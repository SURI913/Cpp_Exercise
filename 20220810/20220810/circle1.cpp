#include <iostream>
using namespace std;

class Circle {
public:
	int radius; //������
	string color; //����

	double calcArea() {
		return 3.14 * radius * radius;
	}
};

int main()
{
	Circle obj, obj2;

	obj.radius = 100;
	obj.color = "bule";
	cout << "���� ����=" << obj.calcArea() << "\n";

	obj.radius = 200;
	obj.color = "white";
	cout << "���� ����=" << obj.calcArea() << '\n';
	return 0;
}