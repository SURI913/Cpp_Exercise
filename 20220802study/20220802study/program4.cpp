#include <iostream>
using namespace std;
int main()
{
	int L, W, H;
	cout << "길이: ";
	cin >> L;
	cout << "너비: ";
	cin >> W;
	cout << "높이: ";
	cin >> H;
	cout << endl;

	//부피계산
	cout << "상자의 부피: " << L * W * H << endl;

	//표면적 계산
	cout << "상자의 표면적: " << 2 * ((L * W) + (L * H) + (H * W)) << endl;
	return 0;
}