/*
 * Program: Illustrate how to declare and define functions.
 * Author: Yiyin Zhou
 * Date: 2024/11/10
 *
 * Description: 
 * This program declares the sum function at the top, so that
 * the sum function can be used in the main function, and the
 * sum function itself is defined after the main function.
 * 
 */

#include <iostream>

int sum(int a, int b); // function declaration

int main() {
  int i = sum(10, 32);
  int j = sum(i, 66);
  std::cout << "The value of j is" << j << std::endl; // 108
  return 0;
}

int sum(int a, int b)  // function definition
{
    return a + b;
}
