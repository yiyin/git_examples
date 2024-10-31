/*
 * Program: Guessing Game, allows 3 guess
 * Author: Yiyin Zhou
 * Date: 2024/10/30
 *
 * Description: 
 * The program generates a random integer between
 * 1 and 100, inclusive, and then ask for an input.
 * It will then tell you if the guess is correct,
 * or too low, or too high. If you guess 3 times
 * and failed, print out you lose, and break out of the
 * while loop.
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout, std::cin, std::endl;
int main() {
  std::srand(std::time(nullptr));
  int secret_number = 1 + std::rand() % 100;
  int guess, num_guesses = 0;
  while (true) {
    if (num_guesses == 3) {  // checked before the next guess
      cout << "You Lose!\n";
      break;  // end
    }
    
    cout << "Enter your guess: "; cin >> guess; // guess the number
    num_guesses ++;                             // increase guess count
    
    if (guess < secret_number)
      cout << guess << ": Too low! Try again.\n";
    else if (guess > secret_number)
      cout << guess << ": Too high! Try again.\n";
    else {
      cout << "Congratulations! You guessed the secret number " << secret_number << " correctly!\n";
      break;  // end
    }
  }
  return 0;
}