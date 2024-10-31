/*
 * Program: Illustrates how to perform an input validation
 * in a loop condition
 * Author: Yiyin Zhou
 * Date: 2024/10/30
 *
 * Description:
 * The program asks a user for a number between 1 and 10.
 * It will keep asking until it gets a number in the range.
 * The while loop has a true condition so it will always
 * go back to the loop. The only exit condition is
 * when the input is in the valid range, through the 
 * break statement.
 * 
 */


#include <iostream>
int main(){
  int number = -1; // need to initialize number to ensure the condition is true
  while (1) {
    std::cout << "Please enter a number between 1 and 10: ";
    std::cin >> number;
    if (number < 1) {
      std::cout << "The number you entered was too small.\n";
    } else if (number > 10) {
      std::cout << "The number you entered was too large.\n";
    }  else {
      break;
    }
  } 
  std::cout << "You entered a valid number: " << number << std::endl;
}
