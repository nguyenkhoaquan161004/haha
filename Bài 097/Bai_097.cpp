#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float t = 1;
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		s = sqrt(t + s);
		i = i + 1;
	}
	cout << "S= " << s;
	return 0;
}