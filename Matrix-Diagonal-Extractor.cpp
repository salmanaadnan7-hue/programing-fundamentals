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

    // Validation: Diagonals only exist properly in square matrices
    if (r != c)
    {
        cout << "NOT A SQUARE MATRIX" << endl;
        return 0;
    }

    int arr[20][20];
    cout << "============================" << endl;
    cout << "||  ENTER MATRIX VALUES   ||" << endl;
    cout << "============================" << endl;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    // Logic for Main Diagonal (Top-Left to Bottom-Right)
    cout << "============================" << endl;
    cout << "||     MAIN DIAGONAL      ||" << endl;
    cout << "============================" << endl;
    for (int i = 0; i < r; i++)
    {
        // For the main diagonal, Row index equals Column index (i == j)
        cout << arr[i][i] << endl;
    }

    // Logic for Secondary Diagonal (Top-Right to Bottom-Left)
    cout << "============================" << endl;
    cout << "||    SECOND DIAGONAL     ||" << endl;
    cout << "============================" << endl;
    for (int i = 0; i < r; i++)
    {
        // The column index moves backward as the row index moves forward
        cout << arr[i][r - 1 - i] << endl;
    }

    return 0;
}