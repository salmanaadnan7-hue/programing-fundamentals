#include<iostream>
using namespace std;
int main()
{
	float c, f;
	cout << "Enter temperature in Fahrenheit =";
	cin >> f;
	c = (5.0 / 9.0 * (f - 32));
	cout << "Temperature in Celsius =" << c << endl;
	return 0;
}