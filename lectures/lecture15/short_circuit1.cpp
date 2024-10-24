/*
 * Program: Illustrate the short circuit rule for boolean logic
 * Author: Yiyin Zhou
 * Date: 2024/10/23
 *
 * Description:
 * This program utilizes the comma operator to illustrate
 * the short circuit rule when evaluating boolean logic.
 * 
 * The comma (,) operator evaluates each of its operands
 * (from left to right) and returns the value of the last
 * operand.
 * 
 * In this case, when we put a print statement and a boolean
 * literal together (std::cout << "1\n", true), it will 
 * print out 1 if this part of the boolean logic operant
 * is evaluated. If a print out is missing, that suggests
 * the missing part is short circuited and not evaluated.
 */

#include <iostream>

int main () {
  std::cout << "true && false:" << std::endl;

  // Does it print out 1 and 2?
  bool result = (std::cout << "1\n", true) && (std::cout << "2\n", false);

  std::cout << "---------------------------------\n";

  std::cout << "false && true:" << std::endl;

  // Does it print out 1 and 2?
  result = (std::cout << "1\n", false) && (std::cout << "2\n", true);

  std::cout << "---------------------------------\n";

  std::cout << "true || false:" << std::endl;

  // Does it print out 1 and 2?
  result = (std::cout << "1\n", true) || (std::cout << "2\n", false);

  std::cout << "---------------------------------\n";

  std::cout << "false || true:" << std::endl;

  // Does it print out 1 and 2?
  result = (std::cout << "1\n", false) || (std::cout << "2\n", true);
 
  return 0;
}