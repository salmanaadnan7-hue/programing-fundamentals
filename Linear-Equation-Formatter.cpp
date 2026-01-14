#include <iostream>
using namespace std;

// Function prototype: Uses Pass-by-Value
void printEquation(double x0, double y0);

int main()
{
    double x0, y0;

    cout << "Enter coordinate x0: ";
    cin >> x0;
    cout << "Enter coordinate y0: ";
    cin >> y0;

    // Passing copies of x0 and y0 to the function
    printEquation(x0, y0);

    return 0;
}

void printEquation(double x0, double y0)
{
    cout << "============================" << endl;
    cout << "Point Analysis Verified" << endl;
    cout << "============================" << endl;
    cout << "The coordinates of the point are: (" << x0 << ", " << y0 << ")" << endl;
    cout << "Point lies on the line where x = " << x0 << " and y = " << y0 << endl;
}