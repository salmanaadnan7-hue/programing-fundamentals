#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // Array to store the user input string
    char text[100];

    cout << "============================" << endl;
    cout << "||    ENTER ANY STRING    ||" << endl;
    cout << "============================" << endl;
    cin.getline(text, 100);

    int count = 0;

    // Iterate through the array until the null terminator '\0' is reached
    for (int i = 0; text[i] != '\0'; i++)
    {
        char c = text[i];

        // Multi-condition check for all vowel variations
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            count++;
        }
    }

    cout << "============================" << endl;
    cout << "||    NUMBER OF VOWELS    ||" << endl;
    cout << "============================" << endl;
    cout << count << endl;

    return 0;
}