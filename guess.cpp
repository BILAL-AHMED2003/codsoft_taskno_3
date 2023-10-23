#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    
    srand(static_cast<unsigned int>(time(nullptr)));

    
    int guess_number = rand() % 200 + 1;

    int a;
    int b = 0;

    cout << "**Welcome to the Number Guessing Game!**" << endl;
    cout<<endl;
    cout << "We have selected a random number between 1 and 200." << endl;
    cout<<endl;
    do {
        cout << "Enter Number that you have guess (1-200): ";
        cin >> a;
        b++;

        if (a < guess_number) {
            cout << "Too low! Try again." << endl;
        } else if (a > guess_number) {
            cout << "Too high! Try again." << endl;
        } else {
            cout << "Congratulations! You've guessed the secret number (" << guess_number << ") in " << b << " attempts!" << endl;
        }
    } while (a != guess_number);

    return 0;
}