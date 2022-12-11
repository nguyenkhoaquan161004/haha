#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float s = 0;
	int i = 1;
	float e = 1;
	int dau = -1;
	while (e >= pow(10, -6))
	{
		e = (float)4 / i;
		s = s + dau * e;
		i = i + 2;
		dau = -dau;
	}
	cout << "S= " << s;
	return 0;
}