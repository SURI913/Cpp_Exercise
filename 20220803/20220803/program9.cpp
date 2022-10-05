#include<iostream>
using namespace std;

int main() {
	double f_temp, c_temp;
	for (f_temp = 0; f_temp <= 100; f_temp += 10) {
		c_temp = (f_temp - 32.0) * 5.0 / 9.0;
		cout << f_temp << "\t" << c_temp << endl;
	}
	return 0;
}