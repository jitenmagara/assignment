#include <iostream>
using namespace std;

int main() {
    int number = 42;
    int guess;

    cout << "Guess the number between 1 and 100!" << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> guess;

        if (guess > number) {
            cout << "Too high! Try again.\n";
        }
        else if (guess < number) {
            cout << "Too low! Try again.\n";
        }
        else {
            cout << "🎉 Correct! You guessed the number.\n";
            break;
        }
    }

    return 0;
}