#include <iostream>
using namespace std;

int main()
{
	char board[3][3];
	int x, y, k, i;
	int count = 0;

	while (true)
	{
		//보드를 초기화 한다.
		for (x = 0; x < 3; x++)
			for (y = 0; y < 3; y++)
				board[x][y] = '  ';

		//사용자로 부터 위치를 받아 보드에 표시한다.
		for (k = 0; k < 9; k++) {
			cout << "(x, y) 좌표: ";
			cin >> x >> y;
			board[x][y] = (k % 2 == 0) ? 'X' : 'O';
			count++;
			//X 우승조건
			if (board[0][0] == 'X' && board[0][1] == 'X' && board[0][2] == 'X') {
				cout << "X가 우승하였습니다." << endl;
				break;
			}
			else if (board[1][0] == 'X' && board[1][1] == 'X' && board[1][2] == 'X') {
				cout << "X가 우승하였습니다." << endl;
				break;
			}
			else if (board[2][0] == 'X' && board[2][1] == 'X' && board[2][2] == 'X') {
				cout << "X가 우승하였습니다." << endl;
				break;
			}
			else if (board[0][0] == 'X' && board[1][1] == 'X' && board[2][2] == 'X') {
				cout << "X가 우승하였습니다." << endl;
				break;
			}
			else if (board[0][2] == 'X' && board[1][1] == 'X' && board[0][2] == 'X') {
				cout << "X가 우승하였습니다." << endl;
				break;
			}

			//O 우승조건
			if (board[0][0] == 'O' && board[0][1] == 'O' && board[0][2] == 'O') {
				cout << "O가 우승하였습니다." << endl;
				break;
			}
			else if (board[1][0] == 'O' && board[1][1] == 'O' && board[1][2] == 'O') {
				cout << "O가 우승하였습니다." << endl;
				break;
			}
			else if (board[2][0] == 'O' && board[2][1] == 'O' && board[2][2] == 'O') {
				cout << "O가 우승하였습니다." << endl;
				break;
			}
			else if (board[0][0] == 'O' && board[1][1] == 'O' && board[2][2] == 'O') {
				cout << "O가 우승하였습니다." << endl;
				break;
			}
			else if (board[0][2] == 'O' && board[1][1] == 'O' && board[0][2] == 'O') {
				cout << "O가 우승하였습니다." << endl;
				break;
			}

			//무승부 조건
			else if (count == 9) {
				cout << "무승부입니다." << endl;
				continue;
			}
			

			//보드를 화면에 그린다.
			for (i = 0; i < 3; i++) {
				cout << "---|---|---" << endl;
				cout << board[i][0] << "  | " << board[i][1] << " | " << board[i][2] << endl;
			}
			cout << "---|---|---" << endl;
		}

		
	}
	
	return 0;
}