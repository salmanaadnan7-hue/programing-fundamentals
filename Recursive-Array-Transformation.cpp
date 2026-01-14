#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;

int main()
{
    // Note: The array size is 5, but the loop runs 6 times. 
    // This causes a "Buffer Overflow" error (accessing list[5]).
    int list[5], i = 1;

    for (i = 0; i < 6; i++)
    {
        // Initial formula for every element
        list[i] = i * i + 5;

        // Conditional logic that creates a dependency on the previous element
        if (i > 2)
        {
            list[i] = 2 * list[i] - list[i - 1];
        }

        cout << list[i] << endl;
    }

    system("pause");
    return 0;
}