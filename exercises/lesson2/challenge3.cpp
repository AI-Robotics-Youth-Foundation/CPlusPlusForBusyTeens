#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int secret = rand() % 10 + 1; // random number between 1 and 10
    int guess;

    cout << "Guess a number between 1 and 10: ";
    while (true) {
        cin >> guess;
        if (guess == secret) {
            cout << "You win!" << endl;
            break;
        } else if (guess > secret) {
            cout << "Too high! Please try again: ";
        } else {
            cout << "Too low! Please try again: ";
        }
    }
    return 0;
} 