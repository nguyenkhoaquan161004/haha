#include <iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int flag = 0;
	int t = n;
	while (t > 1)
	{
		int dv = t % 3;
		if (dv != 0)
			flag = 1;
		t = t / 3;
	}
	if (flag == 1)
		cout << "Khong la dang";
	else
		cout << "La dang";
	return 0;
}