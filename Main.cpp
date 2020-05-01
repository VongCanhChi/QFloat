#include "Qfloat.h"


int main()
{
	Qfloat x;
	string str, str2, str1;
	cout << "Nhap vao chuoi so: ";
	cin >> str;

	x.ScanQfloat(str);
	x.PrintQfloat();

	return 0;
}