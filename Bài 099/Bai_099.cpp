#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float s = 0;
	int i = 1;
	while (i <= n)
	{
		s = pow((float)i + s, (float)i + 1);
		i = i + 1;
	}
	cout << "S= " << s;
	return 0;
}