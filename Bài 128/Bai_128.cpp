#include <iostream>
using namespace std;
int main()
{
	float a, b;
	cout << "a= ";
	cin >> a;
	cout << "b= ";
	cin >> b;
	float temp;
	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	cout << "Gia tri a, b theo thu tu tang dan la:  " << a << " " << b;
	return 0;
}