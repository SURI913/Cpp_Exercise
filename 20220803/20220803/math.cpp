#include <iostream>
#include<stdlib.h>
#include <time.h>

using namespace std;

int main()
{
	srand(time(NULL));
	while (true) {
		int ans;
		int x = rand() % 100;
		int y = rand() % 100;
		int i = rand() % 4 + 1;
		cout << "산수 문제를 자동으로 출제합니다." << endl;
		if (i == 1) {	//덧셈
			cout << x << "+" << y << "=";
			cin >> ans;
			if (x + y == ans) {
				cout << "맞았습니다" << endl;
				break;
			}
			else
				cout << "틀렸습니다" << endl;
		}
		else if (i == 2) {	//뺄셈
			cout << x << "-" << y << "=";
			cin >> ans;
			if (x - y == ans) {
				cout << "맞았습니다" << endl;
				break;
			}
			else
				cout << "틀렸습니다" << endl;
		}
		else if (i == 3) {	//곱셈
			cout << x << "*" << y << "=";
			cin >> ans;
			if (x * y == ans) {
				cout << "맞았습니다" << endl;
				break;
			}
			else
				cout << "틀렸습니다" << endl;
		}
		else if (i == 4) {
			cout << x << "/" << y << "=";
			cin >> ans;
			if (x / y == ans) {
				cout << "맞았습니다" << endl;
				break;
			}
			else
				cout << "틀렸습니다" << endl;
		}
	}
	return 0;
}