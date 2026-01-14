#include<iostream>
using namespace std;

int main()
{
    int n, a, b, c, i;

    cout << "Enter value of n =";
    cin >> n;
    cout << "Enter value of a =";
    cin >> a;
    cout << "Enter value of b =";
    cin >> b;

    // Start a loop from 1 up to b-1
    for (i = 1; i < b; i++)
    {
        c = n * (a + i);
        cout << c << ","; // Print number 
    }

    // Check if we are at the last number
    if (i == b)
    {
        c = n * (a + i);
        cout << c; // Print the last number 
    }

    cout << endl;
    system("pause");
    return 0;
}