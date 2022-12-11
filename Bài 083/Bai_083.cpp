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
	float s = 0;
	float d = 1;
	int i = 1;
	while (i <= n)
	{
		d = d * x;
		s = s + sin(d);
		i++;
	}
	cout << "Tong la: " << s;
	return 0;
}