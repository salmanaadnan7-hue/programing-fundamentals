#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    char air[13][6];
    int t = 0, r, c;

    // Initialize the cabin with '*' representing empty seats
    for (int i = 0; i < 13; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            air[i][j] = '*';
        }
    }

    cout << "Press: 1. First Class" << endl;
    cout << "2. Business Class" << endl;
    cout << "3. Economy Class" << endl;
    cout << "-1. Exit" << endl;

    while (t != -1)
    {
        cin >> t;
        switch (t)
        {
        case 1:
            // Show First Class rows (1-2)
            for (int i = 0; i < 2; i++)
            {
                cout << "Row " << i + 1 << " ";
                for (int j = 0; j < 6; j++)
                {
                    cout << air[i][j] << " ";
                }
                cout << endl;
            }
            cout << "Enter Row number" << endl;
            cin >> r;
            cout << "Enter Column number" << endl;
            cin >> c;

            r = r - 1; // Convert to 0-based index
            c = c - 1;

            if (air[r][c] == 'x')
                cout << "This seat is unavailable, please choose another one." << endl;
            else
                air[r][c] = 'x';
            break;

        case 2:
            // Show Business Class rows (3-7)
            for (int i = 2; i < 7; i++)
            {
                cout << "Row " << i + 1 << " ";
                for (int j = 0; j < 6; j++)
                {
                    cout << air[i][j] << " ";
                }
                cout << endl;
            }
            cout << "Enter Row number" << endl;
            cin >> r;
            cout << "Enter Column number" << endl;
            cin >> c;

            r = r - 1;
            c = c - 1;

            if (air[r][c] == 'x')
                cout << "This seat is unavailable, please choose another one." << endl;
            else
                air[r][c] = 'x';
            break;

        case 3:
            // Show Economy Class rows (8-13)
            for (int i = 7; i < 13; i++)
            {
                cout << "Row " << i + 1 << " ";
                for (int j = 0; j < 6; j++)
                {
                    cout << air[i][j] << " ";
                }
                cout << endl;
            }
            cout << "Enter Row number" << endl;
            cin >> r;
            cout << "Enter Column number" << endl;
            cin >> c;

            r = r - 1;
            c = c - 1;

            if (air[r][c] == 'x')
                cout << "This seat is unavailable, please choose another one." << endl;
            else
                air[r][c] = 'x';
            break;

        case -1:
            break;

        default:
            cout << "Invalid option" << endl;
        }

        if (t != -1)
        {
            cout << "To book another seat choose class, -1 to Exit." << endl;
        }
    }

    // Final Display of all seats
    cout << "Seats Available:" << endl;
    for (int i = 0; i < 13; i++)
    {
        cout << setw(5) << "Row " << setw(2) << i + 1 << setw(5);
        for (int j = 0; j < 6; j++)
        {
            cout << air[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}