#include<iostream>
using namespace std;

int main()
{
    int p = 1, b = 0;

    // Loop continues until the user enters 0
    while (p != 0)
    {
        cout << "Enter price of the item (Enter 0 to finish): ";
        cin >> p;
        b = b + p; // Add item price to the total bill
    }

    // Apply a 10% discount if the bill is over 500
    if (b > 500)
    {
        b = b - (b * 0.10); // Logic: Total - 10%
    }

    cout << "Final Bill: " << b << endl;

    system("pause");
    return 0;
}