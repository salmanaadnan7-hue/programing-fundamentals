#include <iostream>
using namespace std;

int main()
{
    int a = 0, b = 1, next, n, c = 1;

    cout << "Enter a number = ";
    cin >> n;

    // Print the first two numbers of the sequence
    cout << a << " " << b << " ";

    // Loop to calculate and print the rest of the sequence
    while (c <= n - 2)
    {
        next = a + b; // To calculate the next value
        cout << next << " ";

        // Update variables for the next iteration
        a = b;
        b = next;
        c++;
    }

    cout << endl;
    system("pause");
    return 0;
}