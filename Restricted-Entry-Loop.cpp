#include<iostream>
using namespace std;

int main()
{
    int i;

    // The code will run at least once
    do
    {
        cout << "Enter a number (1-100) = ";
        cin >> i;

        // Keep looping if i is greater than 100 OR less than 1
    } while (i > 100 || i < 1);

    cout << "Success! You entered: " << i << endl;

    system("pause");
    return 0;
}