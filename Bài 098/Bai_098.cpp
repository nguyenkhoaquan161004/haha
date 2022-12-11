#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	int i = 2;
	while (i <= n)
	{
		s = pow((float)i + s, 1 /(float) i);
		i = i + 1;
	}
	cout << "S= " << s;
	return 0;
}