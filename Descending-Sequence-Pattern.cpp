#include <iostream>
using namespace std;

int main() {
    int i = 1; // Start from the first row

    while (i <= 9) {
        int j = i; // Initialize countdown from current row number

        while (j >= 1) {
            cout << j;

            // Print '=' only if it's not the last number in the sequence
            if (j > 1) {
                cout << "=";
            }
            j--; // Decrease the countdown
        }

        cout << endl; // Move to the next line
        i++; // Increment row number
    }

    return 0;
}