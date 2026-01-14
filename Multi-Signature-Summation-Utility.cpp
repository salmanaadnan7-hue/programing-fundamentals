#include <iostream>
using namespace std;

// Overloaded Function Prototypes
int sum(int a, int b);
float sum(float a, float b);
int sum(int a, int b, int c);

int main() {
    int choice;
    cout << "Enter 1 for adding 2 integers\n";
    cout << "Enter 2 for adding 2 floats\n";
    cout << "Enter 3 for adding 3 integers\n";
    cout << "Choice: ";
    cin >> choice;

    switch (choice) {
    case 1: {
        int a, b;
        cout << "Enter two integers: ";
        cin >> a >> b;
        // Calls the (int, int) version
        cout << "Sum: " << sum(a, b) << endl;
        break;
    }
    case 2: {
        float a, b;
        cout << "Enter two floats: ";
        cin >> a >> b;
        // Calls the (float, float) version
        cout << "Sum: " << sum(a, b) << endl;
        break;
    }
    case 3: {
        int a, b, c;
        cout << "Enter three integers: ";
        cin >> a >> b >> c;
        // Calls the (int, int, int) version
        cout << "Sum: " << sum(a, b, c) << endl;
        break;
    }
    default:
        cout << "Invalid choice" << endl;
    }
    return 0;
}

// Function Definitions
int sum(int a, int b) {
    return a + b;
}

float sum(float a, float b) {
    return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}