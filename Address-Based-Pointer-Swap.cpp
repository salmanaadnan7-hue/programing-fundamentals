#include <iostream>
using namespace std;

// Function prototype using references (&)
void swapNumbers(int& x, int& y);

int main() {
    int a, b;

    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;

    // Because we use references, these actual variables will be changed
    swapNumbers(a, b);

    cout << "Value of a after swap: " << a << endl;
    cout << "Value of b after swap: " << b << endl;

    return 0;
}

// Function definition
void swapNumbers(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}