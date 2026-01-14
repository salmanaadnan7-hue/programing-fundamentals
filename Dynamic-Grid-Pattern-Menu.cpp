#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int num, i, j, z = 0, x;
    char choice;

    cout << "Enter number (Grid Size) = ";
    cin >> num;
    x = num * num; // Total count for descending numbers

    cout << "Enter choice (*, a higher char, or a lower char) = ";
    cin >> choice;

    // Logic to map char input to switch-case integers
    if (choice == '*')
    {
        choice = 1;
    }
    else if (num + 48 < choice) // If ASCII value of choice is higher than 'num'
    {
        choice = 2;
    }
    else if (num + 48 > choice) // If ASCII value of choice is lower than 'num'
    {
        choice = 3;
    }

    switch (choice)
    {
    case 1: // Pattern: Star Square
        for (i = 1; i <= num; i++)
        {
            for (j = 1; j <= num; j++)
                cout << "*";
            cout << endl;
        }
        break;

    case 2: // Pattern: Incremental Number Square
        for (i = 1; i <= num; i++)
        {
            for (j = 1; j <= num; j++)
            {
                z = 1 + z;
                cout << setw(3) << z;
            }
            cout << endl;
        }
        break;

    case 3: // Pattern: Decremental Number Square
        for (i = 1; i <= num; i++)
        {
            for (j = 1; j <= num; j++)
            {
                cout << setw(3) << x;
                x = x - 1;
            }
            cout << endl;
        }
        break;

    default:
        cout << "wrong input";
        break;
    }

    system("pause");
    return 0;
}