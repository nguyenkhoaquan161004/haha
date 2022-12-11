#include <iostream>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float f;
	if (x <= 1)
	{
		if (x >= 0)
			f = 5 * x - 7;
		else
			f = -2 * x * x * x + 6 * x + 9;
	}
	else
		f = 2 * x * x * x + 5 * x * x - 8 * x + 3;
	cout << "f= " << f;
	return 0;
}