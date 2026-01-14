#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{
    string str1[5]; // Stores names of 5 runners
    int a[5][7];    // Stores 7 days of mileage for 5 runners
    int i, j, sum = 0, avg;

    // Data Entry Phase
    for (i = 0; i < 5; i++)
    {
        cout << " Enter name of runner " << i + 1 << " = ";
        cin >> str1[i];

        for (j = 0; j < 7; j++)
        {
            cout << " Enter miles for Day " << j + 1 << " = ";
            cin >> a[i][j];
            sum = sum + a[i][j];
        }

        cout << " Total miles run by " << str1[i] << " = " << sum << endl;
        avg = sum / 7;
        cout << " Average miles per day = " << avg << endl;

        sum = 0; // Reset sum for the next runner
    }

    // Tabular Report Phase
    cout << "\n--- Weekly Performance Report ---\n";
    for (i = 0; i < 5; i++) // Fixed: replaced 'i, 5' with 'i < 5'
    {
        cout << setw(10) << left << str1[i] << ": ";
        for (j = 0; j < 7; j++)
        {
            cout << "D" << j + 1 << ":" << a[i][j] << "  ";
        }
        cout << endl;
    }

    return 0;
}