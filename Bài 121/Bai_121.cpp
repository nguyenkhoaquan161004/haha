#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int att = 1;
	int at = 1;
	int i = 2;
	int ahh;
	while (i <= n)
	{
		ahh = att + at;
		att = at;
		at = ahh;
		i = i + 1;
	}
	cout << "a" << i - 1 << " = " << ahh;
	return 0;
}