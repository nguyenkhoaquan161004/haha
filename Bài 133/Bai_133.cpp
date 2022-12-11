#include <iostream>
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
	if (a + b > c && a + c > b && b + c > a)
	{
		if (a == b && b == c)
			cout << "Tam giac deu";
		else
		{
			if (a* a == b * b + c * c || b * b == a * a + c * c || c * c == a * a + b * b)
			{
				if (a == b || b == c || a == c)
					cout << "Tam giac vuong can";
				else
					cout << "Tam giac vuong";
			}
			else
			{
				if (a == b || a == c || b == c)
					cout << "Tam giac can";
				else
					cout << "Tam giac thuong";
			}
			
		}
	}
	else
		cout << "Khong la tam giac";
	return 0;	
}