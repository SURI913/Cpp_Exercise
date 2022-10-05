#include <iostream>
using namespace std;

class Time {
private:
	int hour;
	int minute;
	int second;
public:
	void setTime(const int h, const int m, const int s);
	void print() const;
};

void Time::setTime(const int h, const int m, const int s) {
	hour = h;
	minute = m;
	second = s;
}
void Time::print() const{
	cout << hour << ':' << minute << ':' << second << endl;
}

int main() {
	Time t;
	t.setTime(07, 10, 20);
	t.print();
	return 0;
}