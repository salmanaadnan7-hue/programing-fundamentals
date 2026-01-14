#include <iostream>
using namespace std;

int main()
{
    int r1, c1, r2, c2;
    // Input dimensions for Matrix A and B
    cout << "============================" << endl;
    cout << "||    ENTER ROWS OF A     ||" << endl;
    cout << "============================" << endl;
    cin >> r1;
    cout << "||   ENTER COLUMNS OF A   ||" << endl;
    cin >> c1;

    cout << "||    ENTER ROWS OF B     ||" << endl;
    cin >> r2;
    cout << "||   ENTER COLUMNS OF B   ||" << endl;
    cin >> c2;

    // Validation: Columns of A must equal Rows of B
    if (c1 != r2)
    {
        cout << "MATRIX CANNOT MULTIPLY" << endl;
        return 0; // Exit if invalid
    }

    int A[20][20], B[20][20], C[20][20];

    // Data Entry for Matrix A
    cout << "ENTER MATRIX A:" << endl;
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c1; j++)
            cin >> A[i][j];

    // Data Entry for Matrix B
    cout << "ENTER MATRIX B:" << endl;
    for (int i = 0; i < r2; i++)
        for (int j = 0; j < c2; j++)
            cin >> B[i][j];

    // Initialize Result Matrix C with zeros
    for (int i = 0; i < r1; i++)
        for (int j = 0; j < c2; j++)
            C[i][j] = 0;

    // The Triple-Nested Loop (The Multiplication Logic)
    for (int i = 0; i < r1; i++)         // Loop through rows of A
    {
        for (int j = 0; j < c2; j++)     // Loop through columns of B
        {
            for (int k = 0; k < c1; k++) // Dot product summation
            {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    // Output the Result
    cout << "============================" << endl;
    cout << "||     RESULT MATRIX      ||" << endl;
    cout << "============================" << endl;
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}