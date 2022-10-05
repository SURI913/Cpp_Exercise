#include<iostream>
using namespace std;
class Employee {
public:
	string name;
	int age;
	int salary;

	void getInfo(string n, int a, int s) {
		name = n;
		age = a;
		salary = s;
	}

	void print() {
		cout << "Employee1: " << endl;
		cout << name << endl;
		cout << age << endl;
		cout << salary << endl;
	}
};

int main() {
	Employee p1;
	p1.getInfo("±èÃ¶¼ö", 38, 2000000);
	p1.print();
	return 0;
}