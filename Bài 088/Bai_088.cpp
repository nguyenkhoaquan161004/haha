#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 1;
	int t = 1;
	int i = 2;
	int dau = -1;
	while (i <= n)
	{
		t = t + i;
		s = s + (float)1 / (dau * t);
		i = i + 1;
		dau = -dau;
	}
	cout << "S= " << s;
	return 0;
}