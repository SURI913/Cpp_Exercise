#include <iostream>
using namespace std;

class Complex {
public:
	double r; //�Ǻμ�
	double i; //��μ�

	void print();
	void reset();
};

void Complex::print(double result) {
	cout << "%4.1f" << result << endl;
}