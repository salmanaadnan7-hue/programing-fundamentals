#include<iostream>
using namespace std;

int main()
{
    float grA, grB;
    int popA, popB, yr = 0;

    cout << "Enter population of town A and it's growth rate =";
    cin >> popA >> grA;
    cout << "Enter population of town B and it's growth rate =";
    cin >> popB >> grB;

    // Convert percentage to decimal 
    grA = grA / 100;
    grB = grB / 100;

    // Loop continues as long as Town A is smaller than Town B
    for (; popA < popB; yr++)
    {
        popA = popA + (popA * grA); // Update Town A population
        popB = popB + (popB * grB); // Update Town B population
    }

    if (popA >= popB)
    {
        cout << "the population of town A is " << popA << endl;
        cout << "the populations of town B is " << popB << endl;
        cout << "The years are " << yr << endl; // Total years passed
    }

    system("pause");
    return 0;
}