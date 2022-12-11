#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: " << n;
	cin >> n;
	int s = 0;
	int i = 1;
	if (i < n)
	{
		if (n % i == 0)
			s = s + i;
		i = i + 1;
	}
	else
	{
		if (n == s)
			cout << "So hoan thien";
		else
			cout << "So khong hoan thien";
	}
	return 0;

}