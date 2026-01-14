#include <iostream>
using namespace std;

// Function prototype
int formula(int N);

int main() {
    int n, result;

    cout << "Enter number: " << endl;
    cin >> n;

    result = formula(n);

    cout << "The result is: " << result << endl;

    return 0;
}

int formula(int N) {
    // The calculation logic:
    // (N/2) provides the integer quotient
    // (N%2)*2 adds a "bonus" of 2 if the number is odd
    int resultValue;
    resultValue = (N * ((N / 2) + ((N % 2) * 2) + N));

    return resultValue;
}