#include<iostream>
using namespace std;

int main()
{
    int n, i;
    cout << "Enter a positive number = ";
    cin >> n;

    // Numbers 1 and below are not prime
    if (n <= 1)
    {
        cout << "Not a prime number" << endl;
    }

    // Check for divisors starting from 2 up to n-1
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            cout << "Not a prime number" << endl;
            break; // Exit the loop if a divisor is found
        }
    }

    // If the loop finished without finding a divisor
    if (n == i)
    {
        cout << "Prime Number" << endl;
    }

    system("pause");
    return 0;
}