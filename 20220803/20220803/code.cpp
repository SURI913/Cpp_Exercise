#include <iostream>
using namespace std;
int main()
{
	char secret_code='h';
	char code;
	cout << "비밀코드를 맞춰보세요: ";
	cin >> code;
	if (code > secret_code)
		cout << code << "앞에 있음";
	else if (code < secret_code)
		cout << code << "뒤에 있음";
	else
		cout << "맞추었습니다";
	return 0;
}