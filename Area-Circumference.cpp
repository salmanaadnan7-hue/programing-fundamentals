#include<iostream>
using namespace std;
int main()
{
	int pi = 22 / 7, r, c, a;
	cout << "Enter radius =" ;
	cin >> r;
	a = pi * r ^ 2;
	c = 2 * pi * r;
	cout << "area = " << a << endl;
	cout << "circumference =" << c << endl;
	return 0;
}