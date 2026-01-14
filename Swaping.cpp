#include<iostream>
using namespace std;
int main()
{
	int a, b, temp;
	cout << "Enter a variable \"a\" = " ;
	cin >> a;
	cout << "Enter a variable \"b\" = " ;
	cin >> b;
	cout << "Before swapping " << endl;
	cout << "value of a=" << a << endl;
	cout << "value of b=" << b << endl;
	temp = a;
	a = b;
	b = temp;
	cout << "After swapping" << endl;
	cout << "value of a =" << a << endl;
	cout << "value of b =" << b << endl;
	return 0;
}