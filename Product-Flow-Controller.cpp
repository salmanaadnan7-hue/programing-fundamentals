#include <iostream>
using namespace std;

int main()
{
    int p;
    cout << "Enter number of products to process: ";
    cin >> p;

    for (int i = 1; i <= p; i++)
    {
        cout << "\nProduct " << i << ":\n";
        int add, pass, pack;

        cout << "Enter Machine A result (1 for added, 0 for not added): ";
        cin >> add;

        if (add == 0)
        {
            cout << "Machine A: Component not added.\n";
            cout << "Machine B: Skipped.\n";
            cout << "Machine C: Discarded.\n";
            continue;
        }
        else
        {
            cout << "Machine A: Component added.\n";
        }

        cout << "Enter Machine B result (1 for passed, 0 for failed): ";
        cin >> pass;

        if (pass == 0)
        {
            cout << "Machine B: Quality checked, failed.\n";
            cout << "Machine C: Discarded.\n";
            continue;
        }
        else
        {
            cout << "Machine B: Quality checked, passed.\n";
        }

        cout << "Enter Machine C result (1 for packaged, 0 for discarded): ";
        cin >> pack;

        if (pack == 1)
        {
            cout << "Machine C: Packaged.\n";
        }
        else
        {
            cout << "Machine C: Discarded.\n";
        }
    }

    return 0;
}