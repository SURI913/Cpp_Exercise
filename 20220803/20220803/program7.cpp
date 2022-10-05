#include <iostream>
using namespace std;
int main() {
	for (int i = 1; i < 101; i++) {
		if (i % 3 == 0) {
			cout << i << " ";
		}
	}
	return 0;
}