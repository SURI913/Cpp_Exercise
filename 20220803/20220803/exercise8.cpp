#include<iostream>
using namespace std;
int main() {
	int test[10];
	for (int& i : test)
		i = 0;

	for (int j = 0; j < 10; j++) {
		cout << test[j] << " ";
	}
	return 0;
}