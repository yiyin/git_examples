/*
 * Program: Illustrate how to use for loop.
 * Author: Yiyin Zhou
 * Date: 2024/11/02
 *
 * Description: 
 * Removing ; in the for statement in forexample1.cpp,
 * we have the following code. compare it to
 * the output of forexample1.cpp.
 * 
 */


#include <iostream>

int main () {
  int product=1;

  for (int i=0; i<=20; i+=5)
    product = product*i;

  std::cout << product << std::endl;  
  return 0;
}