#include <iostream>
using namespace std;

int main()
{
	char board[3][3];
	int x, y, k, i;
	int count = 0;

	while (true)
	{
		//���带 �ʱ�ȭ �Ѵ�.
		for (x = 0; x < 3; x++)
			for (y = 0; y < 3; y++)
				board[x][y] = '  ';

		//����ڷ� ���� ��ġ�� �޾� ���忡 ǥ���Ѵ�.
		for (k = 0; k < 9; k++) {
			cout << "(x, y) ��ǥ: ";
			cin >> x >> y;
			board[x][y] = (k % 2 == 0) ? 'X' : 'O';
			count++;
			//X �������
			if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') {
				cout << "X�� ����Ͽ����ϴ�." << endl;
				break;
			}
			else if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') {
				cout << "X�� ����Ͽ����ϴ�." << endl;
				break;
			}
			else if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') {
				cout << "X�� ����Ͽ����ϴ�." << endl;
				break;
			}
			else if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') {
				cout << "X�� ����Ͽ����ϴ�." << endl;
				break;
			}
			else if (board[0][2] == 'X' && board[1][1] == 'X' && board[0][2] == 'X') {
				cout << "X�� ����Ͽ����ϴ�." << endl;
				break;
			}

			//O �������
			if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') {
				cout << "O�� ����Ͽ����ϴ�." << endl;
				break;
			}
			else if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') {
				cout << "O�� ����Ͽ����ϴ�." << endl;
				break;
			}
			else if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') {
				cout << "O�� ����Ͽ����ϴ�." << endl;
				break;
			}
			else if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') {
				cout << "O�� ����Ͽ����ϴ�." << endl;
				break;
			}
			else if (board[0][2] == 'O' && board[1][1] == 'O' && board[0][2] == 'O') {
				cout << "O�� ����Ͽ����ϴ�." << endl;
				break;
			}

			//���º� ����
			else if (count == 9) {
				cout << "���º��Դϴ�." << endl;
				continue;
			}
			

			//���带 ȭ�鿡 �׸���.
			for (i = 0; i < 3; i++) {
				cout << "---|---|---" << endl;
				cout << board[i][0] << "  | " << board[i][1] << " | " << board[i][2] << endl;
			}
			cout << "---|---|---" << endl;
		}

		
	}
	
	return 0;
}