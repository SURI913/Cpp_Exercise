#include <iostream>
#include <random>
using namespace std;

int main() {
	int choice;
	cout << "����, ����, �� �߿� �ϳ��� �����Ͻÿ� (1, 2, 3): ";
	cin >> choice;

	//��ǻ�� ��
	random_device rd;	//�õ尪�� �ޱ� ���� random_device ����
	mt19937 gen(123);		//���� �ʱ�ȭ
	uniform_int_distribution<int> dis(1, 3);	//�յ� ������ ���� ����
	int computer = dis(gen);
	cout << "��ǻ��: " << computer << endl;

	if (choice == computer) {
		cout << "�����ϴ�!" << endl;	//��� ��Ȳ�� 1����
	}
	else if (choice == 1 && computer == 3 || choice == 2 && computer ==1 || choice == 3 && computer ) {	//�������
		cout << "����� ��!" << endl;
	}

	else
	{
		cout << "��ǻ�� ��!" << endl;
	}
	return 0;
}