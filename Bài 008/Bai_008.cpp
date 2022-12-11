#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "So canh la: ";
	cin >> n;
	float r;
	cout << "Ban kinh la: ";
	cin >> r;
	float p = (float) 2 * n * r * sin( 3.14 / n);
	cout << "Chu vi la: " << p;
	return 0;
}