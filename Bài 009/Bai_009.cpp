#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap so canh cua da giac: ";
	cin >> n;
	float r;
	cout << "Nhap ban kinh cua da giac: ";
	cin >> r;
	float S = (float) (1 / 2) * n * r * r * sin(M_2_PI / n);
	cout << "Dien tich la: " << S;
	return 0;
}