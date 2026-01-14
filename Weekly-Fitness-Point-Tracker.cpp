#include<iostream>
using namespace std;

int main()
{
    int i, steps, p = 0; // p represents the total points

    for (i = 1; i <= 7; i++)
    {
        cout << "Enter steps day " << i << " = ";
        cin >> steps;

        // Scoring Logic
        if (steps > 10000)
        {
            p = p + 10; // Bonus points for high activity
        }
        else if (steps < 5000)
        {
            p = p - 5;  // Penalty for low activity
        }
        // No points added or removed for steps between 5000 and 10000
    }

    // Final Evaluation
    if (p >= 50)
    {
        cout << "Excellent! Keep it up!" << endl;
    }
    else if (p >= 20 && p < 50)
    {
        cout << "Good effort! Try to be more consistent." << endl;
    }
    else
    {
        cout << "Needs improvement." << endl;
    }

    return 0;
}