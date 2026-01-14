#include<iostream>
using namespace std;
int main()
{
	int n;
	cout << "enter a number";
	cin >> n;
	(n % 20 ? cout << "even" : cout << "odd");
	cout << endl;
	system("pause");
	return 0;
}