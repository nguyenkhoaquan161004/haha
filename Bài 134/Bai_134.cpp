#include<iostream>
using namespace std;
int main()
{
	float x;
	cout << "Nhap x; ";
	cin >> x;
	float y;
	cout << "Nhap y: ";
	cin >> y;
	float z;
	cout << "Nhap z: ";
	cin >> z;
	if (x <= y && y <= z)
		cout << "Dung";
	else
		cout << "Sai";
	return 0;
}