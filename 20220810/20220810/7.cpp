#include <iostream>
using namespace std;
class CellPhone {
public:
	string number;
	string model;
	string color;
	bool on;

	void setOn() {
		on = true;
	}

	void getInfo(string n, string m, string c) {
		number = n;
		model = m;
		color = c;
	}
	
	void print() {
		cout << "CellPhone1: " << endl;
		cout << number << endl;
		cout << model << endl;
		cout << color << endl;
		cout << boolalpha <<on << endl;
	}
};

int main() {
	CellPhone p;
	p.getInfo("010-1234-5678", "Galaxy", "Black");
	p.setOn();
	p.print();
}