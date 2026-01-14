#include <iostream>
using namespace std;

// Function Prototype
int qualityPoints(int avg);

int main() {
    int avg;

    cout << "Enter the student's average (0-100): ";
    cin >> avg;

    // Boundary check for valid input
    if (avg < 0 || avg > 100) {
        cout << "Invalid average entered." << endl;
    }
    else {
        int point = qualityPoints(avg);
        cout << "Quality point: " << point << endl;
    }

    return 0;
}

int qualityPoints(int avg) {
    // The "Waterfall" logic: checks range from highest to lowest
    if (avg >= 90 && avg <= 100)
        return 4;
    else if (avg >= 80)
        return 3;
    else if (avg >= 70)
        return 2;
    else if (avg >= 60)
        return 1;
    else
        return 0;
}