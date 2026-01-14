#include <iostream>
using namespace std;

int main()
{
    // Variables for dimensions
    int r, c;
    cout << "============================" << endl;
    cout << "||       ENTER ROWS       ||" << endl;
    cout << "============================" << endl;
    cin >> r;
    cout << "============================" << endl;
    cout << "||      ENTER COLUMNS     ||" << endl;
    cout << "============================" << endl;
    cin >> c;

    int arr[20][20];
    cout << "============================" << endl;
    cout << "||  ENTER MATRIX VALUES   ||" << endl;
    cout << "============================" << endl;

    // Fill the original matrix
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "============================" << endl;
    cout << "||    TRANSPOSE MATRIX    ||" << endl;
    cout << "============================" << endl;

    // The Transpose Logic: Swap the loop hierarchy
    // Notice j (columns) is now the outer loop and i (rows) is the inner loop
    for (int j = 0; j < c; j++)
    {
        for (int i = 0; i < r; i++)
        {
            // Print original [row][col] as [col][row]
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}