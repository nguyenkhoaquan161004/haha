#include <iostream>
using namespace std;
int main()
{
	float a, b, c;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	cout << "c= ";
	cin >> c;
	float temp;
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}

	if (a > c)
	{
		temp = a;
		a = c;
		c = temp;
	}

	if (b > c)
	{
		temp = b;
		b = c;
		c = temp;
	}
	cout << "Gia tri a, b, c  theo thu tu tang dan la:  " << a << " " << b << " " << c;
	return 0;
}