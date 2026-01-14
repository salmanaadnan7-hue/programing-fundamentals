#include <iostream>
using namespace std;

// Function prototype
int FindMax(int arr[10]);

int main() {
    int arr[10];

    // Input phase
    for (int i = 0; i < 10; i++) {
        cout << "Enter element " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Output phase
    cout << "\n----------------------------" << endl;
    cout << "The Maximum Value is: " << FindMax(arr) << endl;
    cout << "----------------------------" << endl;

    return 0;
}

int FindMax(int arr[10]) {
    // Start by assuming the first element is the largest
    int max = arr[0];

    // Compare 'max' against the rest of the array
    for (int i = 1; i < 10; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update 'max' if a larger value is found
        }
    }
    return max;
}