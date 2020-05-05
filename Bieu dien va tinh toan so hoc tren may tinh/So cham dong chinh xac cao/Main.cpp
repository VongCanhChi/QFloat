#include "Qfloat.h"


int main()
{
	Qfloat x;
	string str, str2, str1;
	cout << "Nhap vao chuoi so: ";
	cin >> str;

	x.ScanQfloat(str);
	x.PrintQfloat();

	int dec;
	cout << endl;
	cin >> dec;
	int d[100];
	x.tinhHaiMuTruX(d, dec);
	for (int i = 0; i < 100; i++)
	{
		cout << d[i];
	}

	return 0;
}