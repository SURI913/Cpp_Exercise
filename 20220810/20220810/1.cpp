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
		cout << "ÀÌ¸§: " << name << endl;
		cout << "³ªÀÌ: " << age << endl;
	}
};

int main() {
	Person obj;
	obj.name = "±èÃ¶¼ö";
	obj.age = 21;
	obj.print();
	return 0;
}