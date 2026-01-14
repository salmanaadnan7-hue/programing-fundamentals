#include <iostream>
using namespace std;

int main()
{
    const int MAX = 25;
    int nums[MAX];
    int count = 0;
    int n, num;

    cout << "How many numbers (max 25)? ";
    cin >> n;

    if (n < 1 || n > MAX)
    {
        cout << "Invalid input. Try again.";
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Enter number " << i + 1 << ": ";
        cin >> num;

        // Rule 1: Range Validation
        if (num < 10 || num > 100)
        {
            cout << "Only numbers between 10 and 100 allowed." << endl;
            i--; // Decrement i to repeat this specific turn
            continue;
        }

        // Rule 2: Duplicate Prevention
        bool exists = false;
        for (int j = 0; j < count; j++)
        {
            if (nums[j] == num)
            {
                exists = true;
                break;
            }
        }

        if (!exists)
        {
            nums[count] = num;
            count++;
        }
        else
        {
            cout << "Duplicate number skipped!" << endl;
        }
    }

    cout << "Unique numbers are: ";
    for (int i = 0; i < count; i++)
    {
        cout << nums[i] << " ";
    }

    return 0;
}