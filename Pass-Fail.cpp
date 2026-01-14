#include<iostream>
using namespace std;

int main()
{
    int m;
    cout << "enter marks =";
    cin >> m;
    (m >= 40 ? cout << "Pass" : cout << "Fail");
    cout << endl;
    system("pause");
    return 0;
}