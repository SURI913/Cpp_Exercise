// file3.cpp
// �Ϲ����� �̸�, �й�, ���� �Է�, ����ϴ� ���α׷�
#include <fstream>    // �߰�

#include <iostream>
using namespace std;

int main(void)
{
    char name[20];
    char hak[10];
    int math;

    ofstream fout;  //��½�Ʈ�� ��ü ����
    fout.open("data4.txt");  //���Ͽ��� 

    cout << "�̸��Է�>> ";
    cin >> name;

    cout << "�й��Է�>> ";
    cin >> hak;

    cout << "�����Է�>> ";
    cin >> math;


    cout << "===================" << endl;
    cout << name << " " << hak << " " << math << endl;

    fout << name << " " << hak << " " << math << endl;
    //�߰�-���Ͼ���

    cout << endl;

    fout.close();  //�߰�-��½�Ʈ�� �ݱ�

    return 0;
}