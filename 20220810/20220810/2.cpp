#include<iostream>
using namespace std;

class Computer {
public:
	string name;
	int RAM;
	double cpu_speed;

	void setComputer(string n,int r, double c_speed) {
		name = n;
		RAM = r;
		cpu_speed = c_speed;
	}
	void print() {
		cout << "이름: " << name << endl;
		cout << "RAM: " << RAM << endl;
		cout << "CPU 속도: " << cpu_speed << endl;
	}
};

int main() {
	Computer obj;
	obj.setComputer("오피스컴퓨터", 8, 4.2);
	obj.print();
	return 0;
}