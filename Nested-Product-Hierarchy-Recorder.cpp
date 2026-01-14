#include <iostream>
using namespace std;

int main() {
    int c;
    cout << "Enter number of categories: ";
    cin >> c;

    for (int i = 1; i <= c; i++)
    {
        int sub;
        cout << "\nEnter number of subcategories in Category " << i << ": ";
        cin >> sub;

        for (int j = 1; j <= sub; j++)
        {
            int p;
            cout << "Enter number of products in Category " << i << " Subcategory " << j << ": ";
            cin >> p;

            cout << "\nFor Category " << i << ", Subcategory " << j << ":\n";

            for (int k = 1; k <= p; k++)
            {
                int v;
                cout << "Enter number of variations of Product " << k << ": ";
                cin >> v;

                for (int q = 1; q <= v; q++)
                {
                    cout << " Variation " << q << " added.\n";
                }
            }
            cout << endl;
        }
    }

    cout << "\nAll data recorded successfully.\n";
    return 0;
}