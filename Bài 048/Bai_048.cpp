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
	int i = 1;
	while (i <= n)
	{
		s = s * (x + i);
		i = i + 1;
	}
	cout << "Tich la: " << s;
	return 0;
}