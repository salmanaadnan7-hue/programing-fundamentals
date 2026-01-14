#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // Array to store up to 99 characters plus the null terminator
    char text[100];

    cout << "============================" << endl;
    cout << "||    ENTER ANY STRING    ||" << endl;
    cout << "============================" << endl;

    // cin.getline is used to capture spaces in the input
    cin.getline(text, 100);

    cout << "============================" << endl;
    cout << "||   UPPERCASE LETTERS    ||" << endl;
    cout << "============================" << endl;

    // Loop until the null terminator '\0' is reached
    for (int i = 0; text[i] != '\0'; i++)
    {
        // Check if the character's ASCII value is within the 'A'-'Z' range
        if (text[i] >= 'A' && text[i] <= 'Z')
        {
            cout << text[i];
        }
    }

    cout << endl;
    return 0;
}