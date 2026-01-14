#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // This part checks if a word is a palindrome
    char text[50];

    cout << "============================" << endl;
    cout << "||     ENTER ANY WORD     ||" << endl;
    cout << "============================" << endl;
    cin.getline(text, 50);

    int len = strlen(text);
    bool check = true;

    // We only need to loop halfway through the string
    for (int i = 0; i < len / 2; i++)
    {
        // Compare character at index 'i' with the character at the mirrored end
        if (text[i] != text[len - 1 - i])
        {
            check = false;
            break; // Stop immediately if a mismatch is found
        }
    }

    cout << "============================" << endl;
    cout << "||         RESULT         ||" << endl;
    cout << "============================" << endl;

    if (check)
    {
        cout << "WORD IS PALINDROME" << endl;
    }
    else
    {
        cout << "WORD IS NOT PALINDROME" << endl;
    }

    return 0;
}