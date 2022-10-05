#include <iostream>
using namespace std;

class Time {
public:
	int hour;
	int minute;

	void print() {
		cout << hour << ":" << minute << endl;
	}
};

void init_time(Time& obj, int h, int m) {	//보조함수
	obj.hour = h;
	obj.minute = m;
}

int main() {
	Time a;
	init_time(a, 10, 25);
	a.print();

	Time b;
	b.print();	//init_time()을 호출하지않아서 잘못된 값이 들어감
					//쓰레기값 출력

	return 0;
}