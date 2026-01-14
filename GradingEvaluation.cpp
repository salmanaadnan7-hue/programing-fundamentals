#include <iostream>
using namespace std;
int main()
{
    float marks;
    cout << "==========================================" << endl;
    cout << "||        Grade Evaluation System       ||" << endl;
    cout << "==========================================" << endl;

    cout << "Please Enter your marks : ";
    cin >> marks;

    (marks >= 90) ? cout << "Grade : A" : (marks >= 80) ? cout << "Grade : B" : (marks >= 70) ? cout << "Grade : C" : (marks >= 60) ? cout << "Grade : D" : cout << "Grade : F";
    cout << endl;

    system("pause");
    return 0;
}