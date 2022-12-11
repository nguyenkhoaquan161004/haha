#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	float a;
	cout << "Nhap a: ";
	cin >> a;
	float b;
	cout << "Nhap b: ";
	cin >> b;
	float c;
	cout << "Nhap c: ";
	cin >> c;
	float d = b * b - 4 * a * c;
	if (d <= 0)
	{
		if (d == 0)
		{
			float x0 = -b / 2*a;
			cout << "x= " << x0;
		}
		else
			cout << "Vo nghiem";
	}
	else
	{
		float x1 = (-b + sqrt(d)) / 2 * a;
		float x2 = (-b - sqrt(d)) / 2 * a;
		cout << "x1= " << x1 << " x2= " << x2;
	}
	return 0;
}