#include <iostream>
using namespace std;

// Function prototype
int isPerfect(int num);

int main() {
    cout << "============================" << endl;
    cout << "|| PERFECT NUMBERS (1-1000)|| " << endl;
    cout << "============================" << endl;

    // Iterate through a range to find perfect numbers
    for (int i = 1; i <= 1000; i++) {
        if (isPerfect(i)) {
            cout << i << " ";
        }
    }

    cout << endl;
    return 0;
}

int isPerfect(int num) {
    int sum = 0;

    // A divisor cannot be greater than half of the number
    for (int i = 1; i <= num / 2; i++) {
        // If 'i' is a proper divisor
        if (num % i == 0) {
            sum += i; // Add to the Aliquot Sum
        }
    }

    // A number is perfect if its Aliquot Sum equals the number itself
    if (sum == num)
        return 1;
    else
        return 0;
}