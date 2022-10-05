#include <iostream>
#include <random>
using namespace std;

int main() {
	int choice;
	cout << "가위, 바위, 보 중에 하나를 선택하시오 (1, 2, 3): ";
	cin >> choice;

	//컴퓨터 값
	random_device rd;	//시드값을 받기 위한 random_device 생성
	mt19937 gen(123);		//난수 초기화
	uniform_int_distribution<int> dis(1, 3);	//균등 분포를 위한 선언
	int computer = dis(gen);
	cout << "컴퓨터: " << computer << endl;

	if (choice == computer) {
		cout << "비겼습니다!" << endl;	//비긴 상황을 1순위
	}
	else if (choice == 1 && computer == 3 || choice == 2 && computer ==1 || choice == 3 && computer ) {	//우승조건
		cout << "사용자 승!" << endl;
	}

	else
	{
		cout << "컴퓨터 승!" << endl;
	}
	return 0;
}