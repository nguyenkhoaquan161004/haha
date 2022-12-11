#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int dem = 0;
	int i = 1;
	if (i <= n)
	{
		if (n % i == 0)
			dem++;
		i = i + 1;
	}
	if (dem == 2)
		cout << "So nguyen to";
	else
		cout << "So khong nguyen to";
	return 0;
}