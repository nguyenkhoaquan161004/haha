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
	int i = 3;
	float t = x;
	while (i <= 2 * n + 1)
	{
		t = t * x * x;
		s = s + t;
		i = i + 2;
	}
	cout << "Tong la: " << s;
	return 0;
}