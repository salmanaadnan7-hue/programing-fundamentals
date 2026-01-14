#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of diamond: ";
    cin >> n;

    // --- Part 1: Upper Triangle (Including the middle row) ---
    for (int i = 1; i <= n; i++) {
        // Print leading spaces
        for (int j = i; j < n; j++) {
            cout << " ";
        }

        // Print the stars and hollow spaces
        for (int j = 1; j <= (2 * i - 1); j++) {
            // Print star only at the first and last position of the row
            if (j == 1 || j == (2 * i - 1))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    // --- Part 2: Lower Triangle (The inverted portion) ---
    for (int i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (int j = n; j > i; j--) {
            cout << " ";
        }

        // Print the stars and hollow spaces
        for (int j = 1; j <= (2 * i - 1); j++) {
            // Print star only at the first and last position of the row
            if (j == 1 || j == (2 * i - 1))
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}