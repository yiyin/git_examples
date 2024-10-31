/*
 * Program: Guessing Game, allows unlimited guesses
 * Author: Yiyin Zhou
 * Date: 2024/10/30
 *
 * Description: 
 * The program generates a random integer between
 * 1 and 100, inclusive, and then ask for an input.
 * It will keep asking user to guess until the
 * correct number is guessed, otherwise it will
 * tell you if the number is too low or too high.
 */


#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout, std::cin, std::endl;

int main() {
  std::srand(std::time(nullptr));
  int secret_number = 1 + std::rand() % 100;
  int guess;
  
  while (guess != secret_number) {
    cout << "Enter your guess: "; cin >> guess;
    if (guess < secret_number)
      cout << guess << ": Too low! Try again.\n";
    else if (guess > secret_number)
      cout << guess << ": Too high! Try again.\n";
  }
  cout << "Congratulations! You guessed the secret number "
      << secret_number << " correctly!\n";
  return 0;
}