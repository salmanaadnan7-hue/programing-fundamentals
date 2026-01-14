#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n;
    cout << "============================" << endl;
    cout << "||  ENTER HOW MANY WORDS  ||" << endl;
    cout << "============================" << endl;
    cin >> n;

    // Important: ignore the newline character left in the buffer by cin >> n
    cin.ignore();

    char arr[50][50]; // 2D array: n rows of 50 characters each

    for (int i = 0; i < n; i++)
    {
        cout << "============================" << endl;
        cout << "||       ENTER WORD       ||" << endl;
        cout << "============================" << endl;
        cin.getline(arr[i], 50);
    }

    cout << "============================" << endl;
    cout << "||     REVERSED ORDER     ||" << endl;
    cout << "============================" << endl;

    // Backward Loop: Start at index n-1 and go down to 0
    for (int i = n - 1; i >= 0; i--)
    {
        cout << arr[i] << endl;
    }

    return 0;
}