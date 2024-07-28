#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()
#include <string>  // for string and stoi
#include <limits>  // for numeric_limits

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int target = rand() % 10 + 1;
    int guess;
    int attempts = 0;
    string input;
    
    cout << "Guess the number between 1 and 10:" << endl;

    while (true) {
        cout << "Your guess: ";
        getline(cin, input);

        try {
            // Convert the input to an integer
            guess = stoi(input);
            
            // Ensure the guess is within the valid range
            if (guess < 1 || guess > 10) {
                cout << "Please enter a number between 1 and 10." << endl;
                continue; // Prompt user to enter the guess again
            }
            
            attempts++;

            if (guess < target) {
                cout << "Lower!" << endl;
            } else if (guess > target) {
                cout << "Higher!" << endl;
            } else {
                cout << "Correct! You guessed it in " << attempts << " attempts." << endl;
                break;
                 /* Exit the loop if the guess is correct */ 
            }
        } catch (const invalid_argument& e) {
            cout << "Invalid input. Please enter an integer value." << endl;
        } catch (const out_of_range& e) {
            cout << "Number out of range. Please enter a valid integer." << endl;
        }
    }

    return 0;
}
