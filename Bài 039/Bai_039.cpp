#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 1;
	int i = 1;
	while (i <= n)
	{
		s = s + (float)(1 + 1 / (i * i));
		i = i + 1;
	}
	cout << "Tich la: " << s;
	return 0;
}