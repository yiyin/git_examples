#include <iostream>

int main(){
  int score;
  std::cout << "Enter the score: ";
  std::cin >> score;
  std::cout << "The score is " << score << std::endl;
  if ( (score < 0) || (score > 10) ) // The inner () are optional
    std::cout << "score is not between 0 and 10.\n";
  else
    std::cout << "score is between 0 and 10.\n";
}
