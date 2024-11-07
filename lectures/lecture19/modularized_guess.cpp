#include <iostream>
#include <cstdlib>
#include <ctime>
using std::cout, std::cin, std::endl;

// check if the input is valid
int get_valid_input(int low, int high){
  int user_input;
  do {
    cout << "Enter your guess: ";
    cin >> user_input;
  } while (user_input < 1 || user_input > 100);
  return user_input;
}

// check if the guess is too high or too low
void check_guess(int guess, int secret){
    if (guess < secret)
      cout << guess << ": Too low! Try again.\n";
    else if (guess > secret)
      cout << guess << ": Too high! Try again.\n";
}

int main() {
  const int LOW = 1, HIGH = 100;
  std::srand(std::time(nullptr));
  int secret_number = LOW + std::rand() % HIGH;
  int guess = -1;

  while (guess != secret_number) {
    // check if the input is valid
    guess = get_valid_input(LOW, HIGH);
    
    // check if the guess is too high or too low
    check_guess(guess, secret_number);
  
  } // only exit condition is the guess is correct.
  
  cout << "You guessed the secret number "
       << secret_number << " correctly!\n";
  return 0;
}