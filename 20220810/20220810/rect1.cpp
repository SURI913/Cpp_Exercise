#include <iostream>
using namespace std;

class Rectangle {
public:
	int width, height;
	int calArea() {
		return width * height;
	}
};

int main() {
	Rectangle rect;
	rect.width = 2;
	rect.height = 6;
	cout << "�簢���� ����: " << rect.calArea();
	return 0;
}