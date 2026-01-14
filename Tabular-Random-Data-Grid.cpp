#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
    int a[200];

    for (int i = 0; i < 200; i++)
    {
        // Assign a random number to the current array index
        a[i] = rand();

        // Output the number with a fixed width of 10 for alignment
        cout << setw(10) << a[i];

        // Every 10 elements, start a new line to create a grid
        if ((i + 1) % 10 == 0)
        {
            cout << endl;
        }
    }

    system("pause");
    return 0;
}