// file6.cpp
// �Ϲ����� �̸�, �й�, ���� �Է��ϴ� c++ ���α׷�
// ���Ͽ��� �ҷ��� �� ȭ�鿡 ����ϴ� �ڵ�

#include <iostream>
#include <fstream>    // �߰�
using namespace std;

int main(void)
{
    char name[20];
    char hak[10];
    int math;
    ifstream fin;  //�Է½�Ʈ�� ��ü ����
    fin.open("data4.txt");  //���Ͽ���, �޸𸮷� �ҷ�����

    if (fin.fail())
        cout << "���Ͽ��� ����" << endl;

    fin >> name >> hak >> math;   // ������ �Է��ϱ�

    cout << "======================" << endl;
    cout << name << " " << hak << " " << math << endl;
    //ȭ�����

    cout << endl;

    fin.close();  //�Է½�Ʈ�� �ݱ�

    return 0;
}