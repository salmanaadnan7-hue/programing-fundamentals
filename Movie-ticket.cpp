#include <iostream>
using namespace std;

int main()
{
    int age;
    cout << "Enter age" << endl;
    cin >> age;

    if (age >= 0 && age <= 12)
    {
        age = 1; // Child 
    }
    else if (age >= 13 && age <= 17)
    {
        age = 2; // Teenager 
    }
    else if (age >= 18 && age <= 50)
    {
        age = 3; // Adult 
    }
    else if (age > 60)
    {
        age = 4; // Senior 
    }
    else
    {
        cout << "Invalid age" << endl; // For negative numbers or the 51-60 gap
    }

    switch (age)
    {
    case 1:
        cout << "$5" << endl;
        break;
    case 2:
        cout << "$8" << endl;
        break;
    case 3:
        cout << "$12" << endl;
        break;
    case 4:
        cout << "$6" << endl;
        break;
    default:
        cout << " ";
    }

    system("pause");
    return 0;
}