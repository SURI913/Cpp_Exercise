#include <iostream>
using namespace std;

class Person {
public:
	string name;
	int age;

	void setPerson(string n, int a) {
		name = n;
		age = a;
	}

	void print() { 
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
};

int main() {
	Person obj;
	obj.name = "��ö��";
	obj.age = 21;
	obj.print();
	return 0;
}