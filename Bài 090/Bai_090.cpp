#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float s = 0;
	float t = 0;
	int m = 1;
	int i = 1;
	int dau = -1;
	while (i <= n)
	{
		t = t * x;
		m = m * i;
		s = s + (float)dau * t / m;
		i = i + 1;
		dau = -dau;
	}
	cout << "S= " << s;
	return 0;
}