#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float s = 0;
	float e = 1;
	int m = 1;
	int i = 1;
	while (e >= pow(10, -6))
	{
		e = (float)1 / m;
		s = s + e;
		i = i + 1;
		m = m + i;
	}
	cout << "S= " << s;
	return 0;
}
