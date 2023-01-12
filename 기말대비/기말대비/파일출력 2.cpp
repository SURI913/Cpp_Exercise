// file3.cpp
// 일반적인 이름, 학번, 점수 입력, 출력하는 프로그램
#include <fstream>    // 추가

#include <iostream>
using namespace std;

int main(void)
{
    char name[20];
    char hak[10];
    int math;

    ofstream fout;  //출력스트림 객체 생성
    fout.open("data4.txt");  //파일열기 

    cout << "이름입력>> ";
    cin >> name;

    cout << "학번입력>> ";
    cin >> hak;

    cout << "점수입력>> ";
    cin >> math;


    cout << "===================" << endl;
    cout << name << " " << hak << " " << math << endl;

    fout << name << " " << hak << " " << math << endl;
    //추가-파일쓰기

    cout << endl;

    fout.close();  //추가-출력스트림 닫기

    return 0;
}