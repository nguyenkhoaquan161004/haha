#include <iostream>
using namespace std;
int main()
{
	float a;
	cout << "Nhap a: ";
	cin >> a;
	float b;
	cout << "Nhap b: ";
	cin >> b;
	float lc = a;
	while (lc < b)
		lc = b;
	cout << lc;
	return 0;
}