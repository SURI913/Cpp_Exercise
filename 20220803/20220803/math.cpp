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
		cout << "��� ������ �ڵ����� �����մϴ�." << endl;
		if (i == 1) {	//����
			cout << x << "+" << y << "=";
			cin >> ans;
			if (x + y == ans) {
				cout << "�¾ҽ��ϴ�" << endl;
				break;
			}
			else
				cout << "Ʋ�Ƚ��ϴ�" << endl;
		}
		else if (i == 2) {	//����
			cout << x << "-" << y << "=";
			cin >> ans;
			if (x - y == ans) {
				cout << "�¾ҽ��ϴ�" << endl;
				break;
			}
			else
				cout << "Ʋ�Ƚ��ϴ�" << endl;
		}
		else if (i == 3) {	//����
			cout << x << "*" << y << "=";
			cin >> ans;
			if (x * y == ans) {
				cout << "�¾ҽ��ϴ�" << endl;
				break;
			}
			else
				cout << "Ʋ�Ƚ��ϴ�" << endl;
		}
		else if (i == 4) {
			cout << x << "/" << y << "=";
			cin >> ans;
			if (x / y == ans) {
				cout << "�¾ҽ��ϴ�" << endl;
				break;
			}
			else
				cout << "Ʋ�Ƚ��ϴ�" << endl;
		}
	}
	return 0;
}