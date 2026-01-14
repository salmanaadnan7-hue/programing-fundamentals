#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "==========================================" << endl;
    cout << "||        Number Processing System      ||" << endl;
    cout << "==========================================" << endl;

    cout << "Enter number : ";
    cin >> num;

    (num % 2 == 0) ? ((num % 5 == 0) ? cout << "Even and Divisible by 5" : cout << "Even but not divisible by 5") : ((num > 50) ? cout << "Odd and large" : cout << "Odd and small");

    cout << endl;
    system("pause");
    return 0;
}