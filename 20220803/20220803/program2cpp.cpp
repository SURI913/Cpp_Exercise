#include <iostream>
using namespace std;
int main()
{
	int choice;
	cout << "콜라, 물, 스프라이트, 주스, 커피 중에서 하나를 선택하세요: ";
	cin >> choice;
	switch (choice)
	{
	case 1:	//콜라
		cout << "콜라를 선택하였습니다" << endl;
		break;

	case 2:	//물
		cout << "물을 선택하였습니다" << endl;
		break;

	case 3:	//스프라이트
		cout << "스프라이트를 선택하였습니다" << endl;
		break;

	case 4:	//주스
		cout << "주스를 선택하였습니다" << endl;
		break;

	case 5:	//커피
		cout << "커피를 선택하였습니다" << endl;
		break;

	default:	//오류
		cout << "오류. 선택이 유효하지 않습니다. 돈을 반환합니다." << endl;
		break;
	}
	return 0;
}