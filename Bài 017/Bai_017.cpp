#include<iostream>;
using namespace std;
int main()
{
	float x;
	cout << "Nhap x: ";
	cin >> x;
	float x2 = x * x;
	float x4 = x2 * x2;
	float x6 = x4 * x2;
	float x12 = x6 * x6;
	float x11 = x12 / x;
	cout << "x11= " << x11;
	return 0;
}