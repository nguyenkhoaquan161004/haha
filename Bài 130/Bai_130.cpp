#include <iostream>
using namespace std;
int main()
{
	float x, y, z;
	cout << "x= ";
	cin >> x;
	cout << "y= ";
	cin >> y;
	cout << "z= ";
	cin >> z;
	if (x + y > z && y + z > x && x + z > y)
		cout << "Ton tai tam giac co do dai 3 canh la x y z";
	else
		cout << "Khong ton tai tam giac";
	return 0;
}

