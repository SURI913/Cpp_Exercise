#include<iostream>
using namespace std;

int main() {
	int vowel = 0, consonant = 0; //����, ����
	char ch;

	cout << "�����ڸ� �Է��ϰ� ��Ʈ��-Z�� ġ����" << endl;
	while (cin >> ch)
	{
		switch (ch)
		{
		case 'a':	case 'i':		case 'u':	case 'e':	case 'o':
			vowel++;	break;
		default:
			consonant++;	break;
		}
	}
	cout << "����: " << vowel << endl;
	cout << "����: " << consonant << endl;
	return 0;
}