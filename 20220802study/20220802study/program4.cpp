#include <iostream>
using namespace std;
int main()
{
	int L, W, H;
	cout << "����: ";
	cin >> L;
	cout << "�ʺ�: ";
	cin >> W;
	cout << "����: ";
	cin >> H;
	cout << endl;

	//���ǰ��
	cout << "������ ����: " << L * W * H << endl;

	//ǥ���� ���
	cout << "������ ǥ����: " << 2 * ((L * W) + (L * H) + (H * W)) << endl;
	return 0;
}