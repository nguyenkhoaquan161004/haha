#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * i;
		s = pow((float)i + t, i + 1);
		i = i + 1;
	}
	cout << "S= " << s;
	return 0;
}