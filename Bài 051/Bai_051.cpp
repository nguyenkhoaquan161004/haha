#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int s = 1;
	int i = 1;
	while (i <= n)
		{
		if(n%i==0)
			s = s * i;
	    i = i + 1;
        }
	cout << "Tich cac uoc la: " << s;
	return 0;
}