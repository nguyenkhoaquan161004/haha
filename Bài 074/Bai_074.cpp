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
	int m = 1;
	int i = 2;
	while (i <= 2)
	{
		t = t * x;
		m = m * i;
		s = s + (float)t / m;
		i = i + 1;
	}
	cout << "Tong la: " << s;
	return 0;
}