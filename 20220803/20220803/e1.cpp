#include <iostream>
using namespace std;

int main() {
	/*
	* for (int x = 0; x < 10; x++) {
		cout << 0 << endl;
	}
	cout << x << endl;
	*/

	int i = 0;
	for (;;) {
		if (i > 10)
			break;
		if (i < 6)
			continue;
		printf("%d", i);
		i++;
	}
}