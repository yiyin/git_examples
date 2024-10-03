/*
 * Program: Illustrates how to floating point numbers are rounded when printed out
 * Author: Yiyin Zhou
 * Date: 2024/09/28
 *
 * Description:
 * This program declares a float variable num.
 * Ask user for a real number input, then print it out
 * using a particular precision.
 * The typical numbers you can try are
 * 1.5, 2.5, -1.5, -2.5 with precision(0)
 * and 1.15, 1.25, 1.35, 1.45 with precision(1).
 * 
 */

#include <iostream>

int main(){
  double num;
  std::cout << "Enter a number: ";
  std::cin >> num;

  std::cout.setf(std::ios::fixed);
  std::cout.precision(0);
  std::cout << "The number is: " << num << std::endl;

  return 0;
}
