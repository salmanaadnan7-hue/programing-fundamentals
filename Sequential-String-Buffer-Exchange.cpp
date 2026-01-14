#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    // Arrays to store strings and one to act as a temporary "holding" area
    char a[50], b[50], temp[50];

    cout << "============================" << endl;
    cout << "||      ENTER STRING A    ||" << endl;
    cout << "============================" << endl;
    cin.getline(a, 50);

    cout << "============================" << endl;
    cout << "||      ENTER STRING B    ||" << endl;
    cout << "============================" << endl;
    cin.getline(b, 50);

    // The Swap Logic:
    // 1. Copy 'a' to 'temp' (stores 'a' safely)
    strcpy_s(temp, a);

    // 2. Overwrite 'a' with 'b'
    strcpy_s(a, b);

    // 3. Overwrite 'b' with 'temp' (which contains the original 'a')
    strcpy_s(b, temp);

    cout << "============================" << endl;
    cout << "||       AFTER SWAP       ||" << endl;
    cout << "============================" << endl;
    cout << "A = " << a << endl;
    cout << "B = " << b << endl;

    return 0;
}