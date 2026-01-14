#include <iostream>
using namespace std;

int main() {
    int shelves[10] = { 0 }; // Initialize 10 shelves with zero quantity
    int choice, code, qty;

    while (true)
    {
        cout << "------------------------------" << endl;
        cout << "1. Update quantity" << endl;
        cout << "2. Add new product" << endl;
        cout << "3. Show low-stock items (<5)" << endl;
        cout << "4. Show all shelves" << endl;
        cout << "5. Exit" << endl;
        cout << "------------------------------" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1 || choice == 2) // Both update and add use similar logic
        {
            cout << "Enter product code (0-9): ";
            cin >> code;
            if (code < 0 || code > 9)
            {
                cout << "Invalid code!" << endl;
                continue;
            }
            cout << "Enter quantity: ";
            cin >> qty;
            shelves[code] = qty;
            cout << (choice == 1 ? "Quantity updated!" : "New product added!") << endl;
        }
        else if (choice == 3)
        {
            cout << "Low-stock shelves:" << endl;
            for (int i = 0; i < 10; i++)
            {
                if (shelves[i] < 5)
                {
                    cout << "Shelf " << i << ": " << shelves[i] << endl;
                }
            }
        }
        else if (choice == 4)
        {
            cout << "All shelf quantities:" << endl;
            for (int i = 0; i < 10; i++)
            {
                cout << "Shelf " << i << ": " << shelves[i] << endl;
            }
        }
        else if (choice == 5)
        {
            cout << "Exiting program..." << endl;
            break;
        }
        else
        {
            cout << "Invalid choice! Try again." << endl;
        }
    }
    return 0;
}