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
	float s = 1;
	float d = 1;
	int i = 0;
	while (i <= n)
	{
		d = d * (x + i);
		s = 1 / d;
		i = i + 1;
	}
	cout << "Tong la: " << s;
	return 0;
}