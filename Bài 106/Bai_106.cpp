#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float s = 0;
	float e = 1;
	float t = x;
	int m = 1;
	int i = 1;
	int dau = 1;
	while (e >= pow(10, -6))
	{
		e = (float)t / m;
		s = s + dau * e;
		t = t * x * x;
		i = i + 2;
		m = m * (i - 1) * i;
		dau = -dau;
	}
	cout << "S= " << s;
	return 0;
}