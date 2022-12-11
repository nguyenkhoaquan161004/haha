#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int att = -1;
	int at = 3;
	int tt = 2;
	int i = 2;
	int ahh;
	while (i <= n)
	{
		tt = tt * 2;
		ahh = 5 * tt + 5 * at - att;
		att = at;
		at = ahh;
		i = i + 1;
	}
	cout << "a" << i - 1 << " = " << ahh;
	return 0;
}