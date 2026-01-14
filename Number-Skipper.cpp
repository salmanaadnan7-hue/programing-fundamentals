#include<iostream>
using namespace std;

int main()
{
    bool flag = true;
    int count;

    // The entire logic only runs if the flag is true
    if (flag)
    {
        // Loop from 1 to 10
        for (count = 1; count <= 10; ++count)
        {
            // If the number is NOT 5, print it
            if (count != 5)
                cout << count << " ";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}