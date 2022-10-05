#include <iostream>
using namespace std;

int main()
{
	int money, candy_price;	//현재 가진 돈, 사탕 가격
	cout << "현재 가지고 있는 돈: ";
	cin >> money;
	cout << "캔디의 가격: ";
	cin >> candy_price;

	//최대한 살 수 있는 사탕 수
	cout << "최대로 살 수 있는 캔디의 개수 = " << money/candy_price << endl;

	//사탕을 구입하고 남은 돈
	cout << "캔디 구입 후 남은 돈 = " << money % candy_price << endl;
	return 0;
}