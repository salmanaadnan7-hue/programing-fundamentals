#include<iostream>
using namespace std;

int main()
{
    int n, c = 0, num, d, orignal, c2 = 0, c3 = 0, t, sum = 0;

    cout << "Enter a number = ";
    cin >> n;

    num = n;
    orignal = n;

    // Step 1: Count the number of digits
    for (num = n; num > 0; c++)
    {
        num = num / 10;
    }

    num = n;
    // Step 2: Calculate the Armstrong sum
    for (; num > 0; )
    {
        d = num % 10; // Get the last digit
        t = 1;

        // Calculate d raised to the power of c (number of digits)
        for (c3 = 1; c3 <= c; c3++)
        {
            t = t * d;
        }

        sum = sum + t;
        num = num / 10; // Remove the last digit
    }

    // Step 3: Compare sum to the original number
    if (sum == orignal)
    {
        cout << "Armstrong Number" << endl;
    }
    else
    {
        cout << "Not an Armstrong Number" << endl;
    }

    system("pause");
    return 0;
}