/*
 * Program: Illustrate the short circuit rule for boolean logic
 * Author: Yiyin Zhou
 * Date: 2024/10/23
 *
 * Description:
 * This program utilizes the comma operator to illustrate
 * the short circuit rule when evaluating boolean logic,
 * and at the same time shows the precedence between
 * the && and || operator.
 */

#include <iostream>

int main () {
  bool result;
  std::cout << std::boolalpha;

  std::cout << "false || false && true:" << std::endl;

  result = (std::cout << "1\n", false) || (std::cout << "2\n", false) && (std::cout << "3\n", true);
  std::cout << "result is: " << result << std::endl;

  std::cout << "--------------------------------\n";

  std::cout << "false || true && true:" << std::endl;
  result = (std::cout << "1\n", false) || (std::cout << "2\n", true) && (std::cout << "3\n", true);
  std::cout << "result is: " << result << std::endl;

  std::cout << "--------------------------------\n";

  std::cout << "true || false && true:" << std::endl;
  result = (std::cout << "1\n", true) || (std::cout << "2\n", false) && (std::cout << "3\n", true);
  std::cout << "result is: " << result << std::endl;


  return 0;
}