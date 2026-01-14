#include <iostream>
using namespace std;

int main()
{
    double alpha[30];

    // Segment 1: Indices 0-9 (Square values)
    for (int i = 0; i < 10; i++)
        alpha[i] = i * i;

    // Segment 2: Indices 10-19 (Triple values)
    for (int i = 10; i < 20; i++)
        alpha[i] = 3 * i;

    // Segment 3: Indices 20-29 (Summing previous segments)
    for (int i = 20; i < 30; i++)
        alpha[i] = alpha[i - 20] + alpha[i - 10];

    // Final Output: Displayed in a 10-column grid
    for (int i = 0; i < 30; i++)
    {
        cout << alpha[i] << " ";
        if ((i + 1) % 10 == 0)
            cout << endl;
    }

    system("pause");
    return 0;
}