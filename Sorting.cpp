#include <iostream>
using namespace std;

int main()
{
    int arr[10];
    int n = 10;

    cout << "Enter 10 Elements = ";
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    // Selection Sort Logic
    for (int i = 0; i < n - 1; i++)
    {
        int min = i; // Assume the current position is the minimum
        for (int j = i + 1; j < n; j++)
        {
            // If a smaller element is found, update the index of min
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        // If a new minimum was found, swap it with the current element
        if (min != i)
        {
            int temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    system("pause");
    return 0;
}