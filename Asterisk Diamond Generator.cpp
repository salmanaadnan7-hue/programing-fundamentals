#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // Part 1: Upper Triangle (including the middle row)
    for (int i = 1; i <= n; i++)
    {
        // Print leading spaces
        for (int j = i; j < n; j++)
        {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    // Part 2: Lower Inverted Triangle
    for (int i = n - 1; i >= 1; i--)
    {
        // Print leading spaces
        for (int j = n; j > i; j--)
        {
            cout << " ";
        }
        // Print stars
        for (int k = 1; k <= (2 * i - 1); k++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}