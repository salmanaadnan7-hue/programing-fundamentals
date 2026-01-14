#include<iostream>
using namespace std;
int main()
{
	int a = 0;
	cout << "Enter your marks = " ;
	cin >> a;
	if (a > 50)
	{
		cout << "You will get A grade" << endl;
	}
	else
	{
		cout << "You will not get A grade" << endl;
	}
	return 0;
}