#include <iostream>
#include <string>
using namespace std;

int main() {
	int counter[256] = { 0 };	//�ƽ�Ű �ڵ� 0~255��ŭ�� �迭
	string s;
	cout << "���ڿ��� �Է��Ͻÿ�: ";
	getline(cin, s);	//������ ������ �Է¹޴´�

	for (int i = 0; i < s.size(); i++) {	//2�� �迭�� ����
		counter[s[i]]++;
	}

	for (int i = 'a'; i <= 'z'; i++)		//���
	{
		cout << (char)i << ": " << counter[i] << endl;
	}

	return 0;
}
