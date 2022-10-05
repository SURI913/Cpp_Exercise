#include<iostream>
#include <time.h>
using namespace std;
const int SIZE = 10;

int Rand();

int main() {
	cout << "가장 많이 생성된 수: " << Rand() << endl;
}

int Rand() {
	int count[SIZE];	//횟수 저장
	for (int i = 0; i < 10; i++) {		//배열초기화
		count[i] = 0;
	}

	for (int i = 0; i < 100;  i++) {
		//랜덤 생성
		srand((unsigned int)time(NULL)); //랜덤 값 생성
		int c_rand = rand() % 9;	//랜덤 값 Rand에 저장

		//횟수체크
		switch (c_rand)
		{
		case 1:
			count[0] += 1;
		case 2:
			count[1] += 1;
		case 3:
			count[2] += 1;
		case 4:
			count[3] += 1;
		case 5:
			count[4] += 1;
		case 6:
			count[5] += 1;
		case 7:
			count[6] += 1;
		case 8:
			count[8] += 1;
		default:
			count[9] += 1;
		}
	}
	//큰 값 출력
	int max = 0;

	for (int i = 0; i < SIZE; i++) {	
		if (count[i] > count[max]) {	//값 비교
			max = i;
		}
	}
	return max;
}