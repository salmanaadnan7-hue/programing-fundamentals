#include<iostream>
using namespace std;

int main()
{
    // Outer loop controls the number of rows and starting length (10 down to 1)
    for (int i = 10; i >= 1; i--)
    {
        // Inner loop prints numbers from 1 up to the current value of i
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        // Move to the next line after each row is printed
        cout << endl;
    }

    system("pause");
    return 0;
}