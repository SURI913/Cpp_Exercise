#include<iostream>
using namespace std;
int main()
{
	int score1, score2, score3, score4, score5;
	cout << "퀴즈 #1 성적: ";
	cin >> score1;
	cout << "퀴즈 #2 성적: ";
	cin >> score2;
	cout << "퀴즈 #3 성적: ";
	cin >> score3;
	cout << "중간고사 성적: ";
	cin >> score4;
	cout << "기말고사 성적: ";
	cin >> score5;
	cout << "=========================" << endl;

	//모든 성적 합산
	cout << "성적 총합: " << score1 + score2 + score3 + score4 + score5 << endl;
	cout << "=========================" << endl;
	return 0;
}