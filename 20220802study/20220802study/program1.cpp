#include <iostream>
#include <string> //문자열 사용할 때 꼭 필요한 헤더
using namespace std;

int main()
{
	string s1, s2, s3;
	cout << "주어: ";
	cin >> s1;
	cout << "동사: ";
	cin >> s2;
	cout << "목적어: ";
	cin >> s3;
	cout << endl;

	cout << s1 + " " + s2  + " a "  + s3 << endl;
	return 0;
}