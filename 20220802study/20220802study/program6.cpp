#include <iostream>
using  namespace std;

int main()
{
	int h, m, s;
	cout << "시: ";
	cin >> h;
	cout << "분: ";
	cin >> m;
	cout << "초: ";
	cin >> s;

	//전체 초 계산 1시간 =3600초, 1분 =60초
	cout << "전체 초: " << (h * 3600) + (m * 60) + s;
	return 0;
}