#include <iostream>
using namespace std;
int main()
{
	int choice;
	cout << "�ݶ�, ��, ��������Ʈ, �ֽ�, Ŀ�� �߿��� �ϳ��� �����ϼ���: ";
	cin >> choice;
	switch (choice)
	{
	case 1:	//�ݶ�
		cout << "�ݶ� �����Ͽ����ϴ�" << endl;
		break;

	case 2:	//��
		cout << "���� �����Ͽ����ϴ�" << endl;
		break;

	case 3:	//��������Ʈ
		cout << "��������Ʈ�� �����Ͽ����ϴ�" << endl;
		break;

	case 4:	//�ֽ�
		cout << "�ֽ��� �����Ͽ����ϴ�" << endl;
		break;

	case 5:	//Ŀ��
		cout << "Ŀ�Ǹ� �����Ͽ����ϴ�" << endl;
		break;

	default:	//����
		cout << "����. ������ ��ȿ���� �ʽ��ϴ�. ���� ��ȯ�մϴ�." << endl;
		break;
	}
	return 0;
}