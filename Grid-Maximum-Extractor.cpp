#include <iostream>
using namespace std;

int main()
{
    // Initialize a 5x5 matrix and a very small starting value for comparison
    int arr[5][5], big = -99999;

    cout << "============================" << endl;
    cout << "||    ENTER 5x5 NUMBERS   ||" << endl;
    cout << "============================" << endl;

    // Outer loop handles the rows
    for (int i = 0; i < 5; i++)
    {
        // Inner loop handles the columns
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];

            // Compare current input with the current largest value
            if (arr[i][j] > big)
            {
                big = arr[i][j];
            }
        }
    }

    cout << "============================" << endl;
    cout << "||     LARGEST NUMBER     ||" << endl;
    cout << "============================" << endl;
    cout << big << endl;

    return 0;
}