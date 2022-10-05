#include <iostream>
using namespace std;

int main()
{
	int f_temp = 60;;

	//È­¾¾¿Âµµ¸¦ ¼·¾¾ ¿Âµµ·Î º¯°æ
	float c_temp = (5.0 / 9.0) * (f_temp - 32);
	cout << "È­¾¾¿Âµµ " << f_temp << "µµ´Â ¼·¾¾¿Âµµ " << c_temp << "ÀÔ´Ï´Ù." << endl;
	return 0;
}