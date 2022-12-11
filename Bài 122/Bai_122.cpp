#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int at = 1;
	int bt = 1;
	int i = 2;
	int ahh, bhh;
	while (i <= n)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		at = ahh;
		bt = bhh;
		i = i + 1;
	}
	cout << "a" << i - 1 <<" = "<< ahh << " b" << i - 1 << " = " << bhh;
	return 0;
}