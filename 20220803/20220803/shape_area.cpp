#include <iostream>
using namespace std;

int main()
{
	int choice, area, length, width;
	double area2, radius;
	cout << "������ �����Ͻÿ�(1,2,3): ";
	cin >> choice;
	if (choice == 1) {	//�簢��
		cout << "����: ";
		cin >> length;
		cout << "����: ";
		cin >> width;
		area = length * width;
		cout << "����: " << area << endl;
	}
	else if (choice == 2) {	//�ﰢ��
		cout << "�غ�: ";
		cin >> length;
		cout << "����: ";
		cin >> width;
		area = (1.0 / 2.0) * length * width;
		cout << "����: " << area << endl;
	}
	else if (choice == 3) {	//��
		cout << "������: ";
		cin >> radius;
		area2 = radius * radius * 3.141592;
		cout << "����: " << area2 << endl;
	}
	else {
		cout << "�ùٸ��� ���� ���� �Դϴ�." << endl;
	}
	return 0;
}