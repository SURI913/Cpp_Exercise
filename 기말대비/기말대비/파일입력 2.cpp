// file6.cpp
// 일반적인 이름, 학번, 점수 입력하는 c++ 프로그램
// 파일에서 불러온 뒤 화면에 출력하는 코드

#include <iostream>
#include <fstream>    // 추가
using namespace std;

int main(void)
{
    char name[20];
    char hak[10];
    int math;
    ifstream fin;  //입력스트림 객체 생성
    fin.open("data4.txt");  //파일열기, 메모리로 불러오기

    if (fin.fail())
        cout << "파일열기 오류" << endl;

    fin >> name >> hak >> math;   // 변수에 입력하기

    cout << "======================" << endl;
    cout << name << " " << hak << " " << math << endl;
    //화면출력

    cout << endl;

    fin.close();  //입력스트림 닫기

    return 0;
}