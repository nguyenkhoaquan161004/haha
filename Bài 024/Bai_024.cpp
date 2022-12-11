#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;
	int ht = (n % 1000) / 100;
	cout << "Chu so hang tram la: " << ht;
	return 0;
}