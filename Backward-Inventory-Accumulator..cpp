#include <iostream>
using namespace std;

int main()
{
    int a[10] = { 1,2,3,4,5,6,7,8,9,10 }, i = 9, sum = 0;

    // The loop starts at index 9 (the last element) and moves down to 0
    for (i = 9; i >= 0; i--)
    {
        cout << a[i] << endl;
        sum = sum + a[i];
    }

    cout << "Total Sum: " << sum << endl;

    system("pause");
    return 0;
}