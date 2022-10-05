#include <iostream>
#include <string>
using namespace std;

int main() {
	int counter[256] = { 0 };	//아스키 코드 0~255만큼의 배열
	string s;
	cout << "문자열을 입력하시오: ";
	getline(cin, s);	//공백을 포함해 입력받는다

	for (int i = 0; i < s.size(); i++) {	//2차 배열의 개념
		counter[s[i]]++;
	}

	for (int i = 'a'; i <= 'z'; i++)		//출력
	{
		cout << (char)i << ": " << counter[i] << endl;
	}

	return 0;
}
