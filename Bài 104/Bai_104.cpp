#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	float s = 0;
	int i = 1;
	float e = 1;
	while (e >= pow(10, -6));
	{
		e = (float)1 / (i * (i + 1));
		s = s + e;
		i = i + 1;
	}
	cout << "S= " << s;
	return 0;
}