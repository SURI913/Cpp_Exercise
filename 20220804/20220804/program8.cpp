#include<iostream>
#include <time.h>
using namespace std;
const int SIZE = 10;

int Rand();

int main() {
	cout << "���� ���� ������ ��: " << Rand() << endl;
}

int Rand() {
	int count[SIZE];	//Ƚ�� ����
	for (int i = 0; i < 10; i++) {		//�迭�ʱ�ȭ
		count[i] = 0;
	}

	for (int i = 0; i < 100;  i++) {
		//���� ����
		srand((unsigned int)time(NULL)); //���� �� ����
		int c_rand = rand() % 9;	//���� �� Rand�� ����

		//Ƚ��üũ
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
	//ū �� ���
	int max = 0;

	for (int i = 0; i < SIZE; i++) {	
		if (count[i] > count[max]) {	//�� ��
			max = i;
		}
	}
	return max;
}