#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
	//난수 발생
	srand(time(NULL));
	int number1 = (rand() % 6) + 1;
	int number2 = (rand() % 6) + 1;

	cout << "두 주사위 합 = " << number1 + number2 << endl;
	return 0;

}