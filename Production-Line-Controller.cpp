#include <iostream>
using namespace std;

int main()
{
    const int s = 10;
    int a[s] = { 5, 8, 12, 8, 3, 7, 8, 10, 15, 8 }, search;

    cout << "Enter the number to search : ";
    cin >> search;

    int count = 0;
    // Pass 1: Counting occurrences
    for (int i = 0; i < s; i++)
    {
        if (a[i] == search)
            count++;
    }

    if (count > 0)
    {
        cout << "The number " << search << " was found " << count << " times." << endl;

        int newNum;
        cout << "Enter a new number to update all occurrences of " << search << ": ";
        cin >> newNum;

        // Pass 2: Updating the values
        for (int i = 0; i < s; i++)
        {
            if (a[i] == search)
                a[i] = newNum;
        }

        cout << "New array:" << endl;
        for (int i = 0; i < s; i++)
            cout << a[i] << " ";

        cout << endl;
    }
    else
    {
        cout << "The number " << search << " was not found in the array." << endl;
    }

    return 0;
}