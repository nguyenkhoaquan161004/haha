#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * i;
		i = i + 1;
	}
	cout << "Tich la: " << t;
	return 1;
}