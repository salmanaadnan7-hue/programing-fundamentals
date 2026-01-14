#include <iostream>
#include <cstdlib> // Required for rand() and srand()
#include <ctime>   // Required for time()
using namespace std;

// Function Prototypes using Pass-by-Reference for the result
void generateAddition(int a, int b, int& result);
void generateAddition3(int a, int b, int c, int& result);
void generateSubtraction(int a, int b, int& result);
void generateMultiplication(int a, int b, int& result);
void generateDivision(int a, int b, int& result);

int main() {
    int choice;
    srand(time(0)); // Seed the random number generator

    cout << "--- MATH QUIZ MENU ---" << endl;
    cout << "1. Addition (2 numbers)\n2. Addition (3 numbers)\n3. Subtraction\n4. Multiplication\n5. Division\nChoice: ";
    cin >> choice;

    int a = rand() % 20 + 1;
    int b = rand() % 20 + 1;
    int c = rand() % 30 + 1;
    int result = 0, userGuess;

    switch (choice) {
    case 1:
        generateAddition(a, b, result);
        cout << "What is " << a << " + " << b << "? ";
        break;
    case 2:
        generateAddition3(a, b, c, result);
        cout << "What is " << a << " + " << b << " + " << c << "? ";
        break;
    case 3:
        generateSubtraction(a, b, result);
        cout << "What is " << a << " - " << b << "? ";
        break;
    case 4:
        generateMultiplication(a, b, result);
        cout << "What is " << a << " * " << b << "? ";
        break;
    case 5:
        // Ensure division results in an integer for this quiz
        a = a * b; // Makes 'a' perfectly divisible by 'b'
        generateDivision(a, b, result);
        cout << "What is " << a << " / " << b << "? ";
        break;
    default:
        cout << "Invalid choice!" << endl;
        return 0;
    }

    cin >> userGuess;
    if (userGuess == result) cout << "Correct! Well done." << endl;
    else cout << "Incorrect. The answer was " << result << endl;

    return 0;
}

// Function Definitions
void generateAddition(int a, int b, int& result) { result = a + b; }
void generateAddition3(int a, int b, int c, int& result) { result = a + b + c; }
void generateSubtraction(int a, int b, int& result) { result = a - b; }
void generateMultiplication(int a, int b, int& result) { result = a * b; }
void generateDivision(int a, int b, int& result) { result = a / b; }