#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int dem;
	int t = n;
	while (t != 0)
	{
		dem = dem++;
		t = t += 1;
	}
	cout << "So chu so la: " << dem;
	return 0;
}