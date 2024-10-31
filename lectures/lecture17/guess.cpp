/*
 * Program: Guessing Game, allows only 1 guess
 * Author: Yiyin Zhou
 * Date: 2024/10/30
 *
 * Description: 
 * The program generates a random integer between
 * 1 and 100, inclusive, and then ask for an input.
 * It will then tell you if the guess is correct,
 * or too low, or too high.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout, std::cin, std::endl;

int main() {
    // Seed the random number generator with the current time
    std::srand(std::time(nullptr));
    // Generate a random integer between 1 and 100 inclusive
    int secret_number = 1 + std::rand() % 100;
    int guess;
    cout << "Guess an integer between 1 and 100: ";
    cin >> guess;

    if (guess < secret_number)
      cout << guess << ": Too low! \n";
    else if (guess > secret_number)
      cout << guess << ": Too high! \n";
    else
      cout << "Congratulations! You guessed the secret number "
          << secret_number << " correctly!\n";
    
    return 0;
}