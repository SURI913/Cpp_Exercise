//예제 프로그램
#include <iostream> //입출력 헤더파일
using namespace std;	//이름공간 설정

int main()
{
	cout << "Hello World!" << endl; //화면에 문자열 출력하는 방법
	cout << 10 << "개의 사과가 있습니다.";

	//보편적 변수 초기화 방법
	int i { 100 };	//int i=100;과 동일
	string s{ "hello" }; //srintg s="hello";와 동일
	return 0;
} //cout 데이터를 출력하는 작업을 맡은 객체 cout <<를 같이 써야함 <<어떤 데이터든 출력 가능
//endl은 화면에서 줄을 바꾸는 제어 문자 /n의 역할을 함




