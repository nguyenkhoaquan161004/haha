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
	float t = 1;
	int i = 2;
	int dau = -1;
	while(i <= 2*n)
	{
		t = t * x * x;
		s = s + (float)dau * t;
		i = i + 2;
		dau = -dau;
	}
	cout << "Tong la: " << s;
	return 0;
}