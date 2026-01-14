#include<iostream>
using namespace std;

int main()
{
    int days = 0, i, fine;

    // The loop runs 5 times to process 5 different entries
    for (i = 1; i <= 5; i++)
    {
        cout << "Enter number of overdue days = ";
        cin >> days;

        // The fine is calculated at a rate of 20 per day
        fine = 20 * days;

        cout << "The total fine is: " << fine << endl;
    }

    system("pause");
    return 0;
}