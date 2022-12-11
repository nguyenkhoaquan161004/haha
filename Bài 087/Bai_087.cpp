#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float s = x;
	float t = x;
	int i = 3;
	int dau = -1;
	while (i <= 2 * n + 1)
	{
		t + t * x * x;
		s = s + (float)dau * t;
		i = i + 2;
		dau = -dau;
	}
	cout << "Tong la: " << s;
	return 0;
}