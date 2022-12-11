#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float s = 0;
	float e = 1 / 2;
	int i = 4;
	while (e >= pow(10, -6));
	{
		e = (float)1 / i;
		s = s + e;
		i = i + 2;
	}
	cout << "S= " << s;
	return 0;
}