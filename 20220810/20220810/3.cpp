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
	cout << "첫 번째 정수: " << obj.n1 << endl;
	cout << "두 전째 정수: " << obj.n2 << endl;
	cout << "연산 결과: " << obj.add() << endl;
	return 0;
}