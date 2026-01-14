#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // This part is for saving data in char arrays
    char str1[21], str2[21];
    int length;

    // Copying "Sunny Day" into str1
    strcpy_s(str1, "Sunny Day");

    // Getting the number of characters in str1
    length = strlen(str1);

    // Copying the contents of str1 into str2
    strcpy_s(str2, str1);

    // Comparing strings alphabetically (lexicographically)
    if (strcmp(str1, str2) <= 0)
    {
        cout << "============================" << endl;
        cout << "||    SMALLER STRING:     ||" << endl;
        cout << "============================" << endl;
        cout << str1 << endl;
    }
    else
    {
        cout << "============================" << endl;
        cout << "||    SMALLER STRING:     ||" << endl;
        cout << "============================" << endl;
        cout << str2 << endl;
    }

    return 0;
}