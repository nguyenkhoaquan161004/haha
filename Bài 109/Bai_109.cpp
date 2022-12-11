#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float s = 1;
	int t = 1;
	float e = 1;
	int i = 1;
	while (e > +pow(10, -6));
	{
		t = t + 1;
		e = (float)1/t;
		s = s + e;
		i = i + 1;
	}
	cout << "S= " << s;
	return 1;
}