#include <iostream>
#include <time.h>
using namespace std;

class Dice {
public:
	int face;

	int roll() {
		srand((unsigned)time(NULL));
		face = (int)(rand() % 6 + 1);
		return face;
	}

	void getDice() {
		cout << "주사위 값=" << face << endl;
	}
};

int main() {
	Dice obj1, obj2;
	obj1.roll();
	obj1.getDice();
	obj2.roll();
	obj2.getDice();
	return 0;
}