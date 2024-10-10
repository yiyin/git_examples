/*
 * Program: Example of using || operator
 * Author: Yiyin Zhou
 * Date: 2024/10/10
 *
 * Description:
 * This example illustrates the use of boolean logic with
 * the OR operator (||).
 * The following two conditions are checked:
 * 1. score >= 0
 * 2. score <= 10
 * and then use the || operator to perform a logical or operation.
 * It is true when either condition is satisfied, that is
 * either score >= 0, or score <= 10. 
 * However, any score value satisfied either of the condition,
 * therefore, the program can only output "true statement".
 * The statement in the "else" condition will never get executed.
 */


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