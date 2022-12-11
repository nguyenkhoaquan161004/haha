#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float s = 3;
	int i = 3;
	float e = 3;
	int dau = 1;
	while (e >= pow(10, -6));
	{
		e = (float)4 / ((i - 1) * i * (i + 1));
		s = s + dau * e;
		dau = -dau;
		i = i + 2;
	}
	cout << "S= " << s;
	return 0;
}