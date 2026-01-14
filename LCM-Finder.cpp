#include<iostream>
using namespace std;

int main()
{
    int n1, n2, lcm;
    cout << "Enter 2 numbers =";
    cin >> n1 >> n2;

    // Start by picking the larger of the two numbers
    if (n1 > n2)
    {
        lcm = n1;
    }
    else
    {
        lcm = n2;
    }

    // Infinite loop that runs until the LCM is found
    for (; 1; )
    {
        // Check if the current value is divisible by both numbers
        if ((lcm % n1 == 0 && lcm % n2 == 0))
        {
            break; // Exit the loop
        }
        else
        {
            // If not found, multiply the two numbers
            lcm = n1 * n2;
        }
    }

    cout << "LCM of " << n1 << " and " << n2 << " is " << lcm << endl;

    system("pause");
    return 0;
}