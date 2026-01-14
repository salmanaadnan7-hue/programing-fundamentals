#include<iostream>
using namespace std;

int main()
{
    int n, a, sum = 0, avg, c = 1;

    cout << "enter limit of numbers = ";
    cin >> n;

    // Loop until we reach the limit
    for (c = 1; c <= n; c++)
    {
        // Enter each number one by one
        cout << "Enter number " << c << "=" << endl;
        cin >> a;

        // Add the new number to the total
        sum = sum + a;
    }

    // Calculate the average
    avg = sum / n;

    cout << "Average = " << avg << endl;

    system("pause");
    return 0;
}