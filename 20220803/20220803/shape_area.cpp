#include <iostream>
using namespace std;

int main()
{
	int choice, area, length, width;
	double area2, radius;
	cout << "도형을 선택하시오(1,2,3): ";
	cin >> choice;
	if (choice == 1) {	//사각형
		cout << "가로: ";
		cin >> length;
		cout << "세로: ";
		cin >> width;
		area = length * width;
		cout << "면적: " << area << endl;
	}
	else if (choice == 2) {	//삼각형
		cout << "밑변: ";
		cin >> length;
		cout << "높이: ";
		cin >> width;
		area = (1.0 / 2.0) * length * width;
		cout << "면적: " << area << endl;
	}
	else if (choice == 3) {	//원
		cout << "반지름: ";
		cin >> radius;
		area2 = radius * radius * 3.141592;
		cout << "면적: " << area2 << endl;
	}
	else {
		cout << "올바르지 못한 선택 입니다." << endl;
	}
	return 0;
}