/*
 * Program: Example of using && operator
 * Author: Yiyin Zhou
 * Date: 2024/10/10
 *
 * Description:
 * This example illustrates the use of boolean logic with
 * the AND operator (&&).
 * If the socre is between 0 and 10 (inclusive),
 * then the program prints out "score is between 0 and 10."
 * Otherwise, the program prints out "score is not between 0 and 10".
 * 
 * This is achievied by checking two conditions:
 * 1. score >= 0
 * 2. score <= 10
 * and then use the && operator to perform a logical and operation.
 * It is only true when both conditions are satisfied.
 */

#include <iostream>

int main(){
  int score;
  std::cout << "Enter the score: ";
  std::cin >> score;
  std::cout << "The score is " << score << std::endl;

  if ( (score >= 0) && (score <= 10) ) // The inner () are optional
    std::cout << "score is between 0 and 10.\n";
  else
    std::cout << "score is not between 0 and 10.\n";
}
