#include <iostream>
using namespace std;

// Function prototype
bool isNumpalindrome(int num);

int main() {
    int num;
    cout << "Enter a number to check if it is a palindrome or not: ";
    cin >> num;

    if (isNumpalindrome(num)) {
        cout << "Result: Palindrome" << endl;
    }
    else {
        cout << "Result: Not a palindrome" << endl;
    }

    return 0;
}

bool isNumpalindrome(int num) {
    // Negative numbers are generally not considered palindromes (e.g., -121 != 121-)
    if (num < 0) return false;

    int n = num;
    long long rev = 0; // Use long long to prevent overflow during reversal
    int remainder;

    while (n != 0) {
        remainder = n % 10;      // Get the last digit
        rev = rev * 10 + remainder; // Append digit to the reversed number
        n = n / 10;              // Remove the last digit from original
    }

    // If the reversed number is equal to the original, it's a palindrome
    return (rev == num);
}