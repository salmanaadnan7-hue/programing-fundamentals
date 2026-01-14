#include <iostream>
using namespace std;
int main()
{
    float temp;
    cout << "==========================================" << endl;
    cout << "||      Weather Classification System    ||" << endl;
    cout << "==========================================" << endl;
    cout << "Please Enter temperature in Celsius : ";
    cin >> temp;
    (temp < 0) ? cout << "Freezing" : (temp <= 10) ? cout << "Cold" : (temp <= 20) ? cout << "Moderate" : (temp <= 30) ? cout << "Warm" : cout << "Hot";
    cout << endl;
    system("pause");
    return 0;
}