#include<iostream>
using namespace std;

int main()
{
    bool flag = true;
    int count;

    // Loop is set to run from 1 to 9
    for (count = 1; count < 10; ++count)
    {
        if (flag) // Only execute if flag is true
        {
            if (count == 5)
                flag = false; // "Lower" the flag when count reaches 5

            cout << count << " ";
        }
    }

    cout << endl;
    system("pause");
    return 0;
}