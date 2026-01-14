#include <iostream>
using namespace std;

int main()
{
    int arr[6] = { 1, 2, 3, 4, 5, 6 };
    int n = 6, p;
    int temp[6];

    cout << "Enter positions to shift: ";
    cin >> p;

    // Normalize p to stay within the bounds of n
    p = p % n;

    // Handle negative shifts to ensure a positive rotation
    if (p < 0)
    {
        p = n + p;
    }

    // Calculate the new index using the modulo operator
    for (int i = 0; i < n; i++)
    {
        int ni = (i + p) % n;
        temp[ni] = arr[i];
    }

    // Copy temp array back to original array
    for (int i = 0; i < n; i++)
    {
        arr[i] = temp[i];
    }

    cout << "Shifted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}