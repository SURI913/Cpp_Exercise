#include <iostream>
using namespace std;

inline double calc_volume(double r, double pi = 3.14) {	//pi���� ����Ʈ�� ����
	return (4.0 / 3.0 * pi * pow(r, 3));
}	//����Ʈ ���� �޷��� �� �����Լ� �տ��ٰ� ����

int main() {
	double radius;
	cout << "�������� �Է��Ͻÿ�: ";
	cin >> radius;

	cout << "���� ���Ǵ� " << calc_volume(radius) << endl;
	return 0;
}

