#include<iostream>
#include<string>
using namespace std;

int main() {
	string frist, second;
	cout << "첫 번째 문자열: ";
	cin >> frist;
	cout << "두 번째 문자열: ";
	cin >> second;

	if (frist == second)
		cout << "2개의 문자열은 같습니다." << endl;
	else
		cout << "2개의 문자열은 다릅니다." << endl;
	return 0;
}