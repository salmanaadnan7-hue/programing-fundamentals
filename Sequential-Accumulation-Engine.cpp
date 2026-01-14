#include <iostream>
using namespace std;

// Function Prototypes
void calculateSum(int a, int b, int& total);
void addNextNumber(int& currentTotal);

int main() {
    int a, b, s = 0;

    cout << "Enter value of a: ";
    cin >> a;
    cout << "Enter value of b: ";
    cin >> b;

    // Step 1: Calculate initial sum
    calculateSum(a, b, s);
    cout << "Sum of first 2 numbers is: " << s << endl;

    // Step 2: Update the existing sum by adding a third number
    addNextNumber(s);
    cout << "The total sum after 3 numbers is: " << s << endl;

    return 0;
}

// Sets the reference 'total' to the sum of a and b
void calculateSum(int a, int b, int& total) {
    total = a + b;
}

// Takes the existing sum by reference and adds a new user-input value to it
void addNextNumber(int& currentTotal) {
    int c;
    cout << "Enter another number to add: ";
    cin >> c;
    currentTotal = currentTotal + c;
}