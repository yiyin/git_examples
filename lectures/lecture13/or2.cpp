#include <iostream>

int main(){
  int score;
  std::cout << "Enter the score: ";
  std::cin >> score;
  std::cout << "The score is " << score << std::endl;
  if ( (score >= 0) || (score <= 10) ) // The inner () are optional
    std::cout << "true statement.\n";
  else
    std::cout << "false statement.\n";
}