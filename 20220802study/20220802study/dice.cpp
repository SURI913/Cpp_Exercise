#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	//���� �߻�
	srand(time(NULL));
	int number1 = (rand() % 6) + 1;
	int number2 = (rand() % 6) + 1;

	cout << "�� �ֻ��� �� = " << number1 + number2 << endl;
	return 0;

}