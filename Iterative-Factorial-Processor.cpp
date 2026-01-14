#include <iostream>
using namespace std;

// Function prototype
int Fact(int n);

int main() {
    int factorial;

    cout << "Enter a positive number to find its factorial: " << endl;
    cin >> factorial;

    // Validation loop to prevent negative input
    while (factorial < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        cout << "Please enter a positive number: ";
        cin >> factorial;
    }

    cout << "The factorial is: " << Fact(factorial) << endl;

    return 0;
}

int Fact(int n) {
    // Handle the special case where 0! = 1
    if (n == 0) return 1;

    int fact = n;
    // Multiplication loop: n * (n-1) * (n-2)... * 1
    for (int i = n - 1; i > 0; i--) {
        fact = fact * i;
    }
    return fact;
}