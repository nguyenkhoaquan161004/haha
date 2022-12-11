#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	float at = 2;
	int i = 2;
	float ahh;
	while (i <= n)
	{
		ahh = (at * at + 2) / (2 * at);
		at = ahh;
		i = i + 1;
	}
	cout << "a" << i - 1 << " = " << ahh;
	return 0;
}