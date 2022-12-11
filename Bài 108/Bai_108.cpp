#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float x; 
	cout << "Nhap x: ";
	cin >> x;
	float s = 1 + x;
	float e = 1;
	int m = 1;
	float t = 1;
	int i = 2;
	while (e >= pow(10, -6))
	{
		t = t * x;
		m = m * i;
		e = (float)t / m;
		s = s + e;
		i = i + 1;
	}
	cout << "S= " << s;
	return 1;
}