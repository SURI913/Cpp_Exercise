#include<iostream>
using namespace std;
class Sum {
public:
	int n1, n2;
	void init(int xval, int yval) {
		n1 = xval;
		n2 = yval;
	}
	int add() {
		return n1 + n2;
	}
};

int main() {
	Sum obj;
	obj.init(10, 20);
	cout << "ù ��° ����: " << obj.n1 << endl;
	cout << "�� ��° ����: " << obj.n2 << endl;
	cout << "���� ���: " << obj.add() << endl;
	return 0;
}