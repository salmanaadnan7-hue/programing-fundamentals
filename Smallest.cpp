#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "enter 3 numbers =";
    cin >> a >> b >> c;
    cout << "smallest number = ";
    (a < b ? (a < c ? cout << a : cout << c) : (b < c ? cout << b : cout << c));
    cout << endl;
    system("pause");
    return 0;
}