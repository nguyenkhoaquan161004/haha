#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float xa;
	cout << "Nhap xa: ";
	cin >> xa;
	float ya;
	cout << "Nhap ya: ";
	cin >> ya;
	float xb;
	cout << "Nhap xb: ";
	cin >> xb;
	float yb;
	cout << "Nhap yb: ";
	cin >> yb;
	float xc;
	cout << "Nhap xc: ";
	cin >> xc;
	float yc;
	cout << "Nhap yc: ";
	cin >> yc;
	float xm;
	cout << "Nhap xm: ";
	cin >> xm;
	float ym;
	cout << "Nhap ym: ";
	cin >> ym;
	float sabc =(float) 1 / 2 * sqrt(xa * yb + xb + yc + xc + ya - xb * ya - xa * yc - xc * yb);
	float smab =(float) 1 / 2 * sqrt(xm * ya + xa + yb + xb + ym - xa * ym - xb * ya - xm * yb);
	float smac =(float) 1 / 2 * sqrt(xm * ya + xa + yc + xc + ym - xa * ym - xc * ya - xm * yc);
	float smbc =(float) 1 / 2 * sqrt(xm * yb + xb + yc + xc + ym - xb * ym - xc * yb - xm * yc);
	float s = smab + smac + smbc;
	if (sabc == s)
		cout << "m thuoc abc";
	else
		cout << "m khong thuoc abc";
	return 0;
}