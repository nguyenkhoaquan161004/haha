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
	float d = x;
	int i = 1;
	while (i <= n)
	{
		d = d * x;
		s = s + (float)(i + 1) / d;
		i++;
	}
	cout << "Tong la: " << s;
	return 0;

}