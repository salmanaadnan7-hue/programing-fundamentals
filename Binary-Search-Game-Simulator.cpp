#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()
using namespace std;

// Global variable to track the number of tries
int attempts = 0;

void guessIt(int number);

int main() {
    // Seed the random number generator using the current system time
    srand(static_cast<unsigned int>(time(0)));

    // Generate a number between 1 and 1000
    int number = rand() % 1000 + 1;

    cout << "========================================" << endl;
    cout << "|| I HAVE A NUMBER BETWEEN 1 AND 1000 ||" << endl;
    cout << "========================================" << endl;

    guessIt(number);

    return 0;
}

void guessIt(int number) {
    int guess;
    cout << "\nPlease type your first guess: ";
    cin >> guess;
    attempts = 1; // Start counting with the first guess

    while (guess != number) {
        if (guess < number) {
            cout << "Too low. Try again: ";
        }
        else if (guess > number) {
            cout << "Too high. Try again: ";
        }

        cin >> guess;
        attempts++; // Increment attempts for every wrong guess
    }

    cout << "\n========================================" << endl;
    cout << "EXCELLENT! You guessed it in " << attempts << " attempts." << endl;
    cout << "========================================" << endl;
}