#include <iostream>
using namespace std;

int main()
{
	int speed = 60;
	double time = 2.5;
	auto distance = speed * time;
	cout << "목적지까지 거리는 " << distance << " 입니다." << endl;
	return 0;
}