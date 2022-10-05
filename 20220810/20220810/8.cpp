#include <iostream>
using namespace std;

class Complex {
public:
	double r; //실부수
	double i; //허부수

	void print();
	void reset();
};

void Complex::print(double result) {
	cout << "%4.1f" << result << endl;
}