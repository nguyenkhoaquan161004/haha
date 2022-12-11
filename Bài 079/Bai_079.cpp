#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int s = 0;
	int d = 1;
	int i = 1;
	while (i <= n)
	{
		d = d * i;
		s = s + d * i;
		i++;
	}
	cout << "Tong la: " << s;
	return 0;
}