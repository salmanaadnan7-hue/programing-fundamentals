#include <iostream>
using namespace std;

// Function prototype
void swap(int x, int y);

int main() {
    int x, y;

    cout << "Enter x and y: " << endl;
    cin >> x >> y;

    cout << "Before Swapping (in main): " << x << ", " << y << endl;

    // Calling the function
    swap(x, y);

    // Note: If you printed x and y here again, they would be back to their original values!
    return 0;
}

void swap(int x, int y) {
    int temp;

    // Standard three-step swap logic
    temp = x;
    x = y;
    y = temp;

    cout << "After Swapping (inside function): " << x << ", " << y << endl;
}