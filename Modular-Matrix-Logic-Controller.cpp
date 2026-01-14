#include <iostream>
using namespace std;

// Function Prototypes
void readmatrix(int matrix[10][10], int rows, int cols);
void showmatrix(const int matrix[10][10], int rows, int cols);
void addmatrix(const int m1[10][10], const int m2[10][10], int res[10][10], int r, int c);
void multiplymatrix(const int m1[10][10], const int m2[10][10], int res[10][10], int r1, int c1, int c2);
void transposematrix(const int matrix[10][10], int res[10][10], int rows, int cols);

int main() {
    int r1, c1, r2, c2;
    cout << "Enter rows and cols for 1st matrix: "; cin >> r1 >> c1;
    cout << "Enter rows and cols for 2nd matrix: "; cin >> r2 >> c2;

    int m1[10][10], m2[10][10], res[10][10];

    cout << "\n--- Enter 1st Matrix ---" << endl;
    readmatrix(m1, r1, c1);
    cout << "\n--- Enter 2nd Matrix ---" << endl;
    readmatrix(m2, r2, c2);

    // 1. Addition Logic
    if (r1 == r2 && c1 == c2) {
        cout << "\nAddition Result:" << endl;
        addmatrix(m1, m2, res, r1, c1);
        showmatrix(res, r1, c1);
    }
    else {
        cout << "\nAddition not possible (Dimensions must match)." << endl;
    }

    // 2. Multiplication Logic
    if (c1 == r2) {
        cout << "\nMultiplication Result:" << endl;
        multiplymatrix(m1, m2, res, r1, c1, c2);
        showmatrix(res, r1, c2);
    }
    else {
        cout << "\nMultiplication not possible (Cols of A must match Rows of B)." << endl;
    }

    // 3. Transpose Logic
    cout << "\nTranspose of Matrix 1:" << endl;
    transposematrix(m1, res, r1, c1);
    showmatrix(res, c1, r1);

    return 0;
}

// --- FUNCTION DEFINITIONS ---

void readmatrix(int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++) {
            cout << "Value at [" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
}

void showmatrix(const int matrix[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            cout << matrix[i][j] << "\t";
        cout << endl;
    }
}

void addmatrix(const int m1[10][10], const int m2[10][10], int res[10][10], int r, int c) {
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            res[i][j] = m1[i][j] + m2[i][j];
}



void multiplymatrix(const int m1[10][10], const int m2[10][10], int res[10][10], int r1, int c1, int c2) {
    for (int i = 0; i < r1; i++) {
        for (int j = 0; j < c2; j++) {
            res[i][j] = 0;
            for (int k = 0; k < c1; k++)
                res[i][j] += m1[i][k] * m2[k][j];
        }
    }
}



void transposematrix(const int matrix[10][10], int res[10][10], int rows, int cols) {
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            res[j][i] = matrix[i][j];
}