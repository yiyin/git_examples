/*
 * Program: Illustrates the effect of floating point precision
 * on the result of implicity type conversion.
 * Author: Yiyin Zhou
 * Date: 2024/09/28
 *
 * Description:
 * This program offers a double prevision floating point num and * asks user to enter a real number. Then it assigns the
 * number to an integer, where type conversion takes place.
 * Then the program set precision to 30 decimal places, 
 * and print out the double precision number and the integer.
 * Check if the integer value is what you expected.
 * In particular, check a number such as 
 * 3.0, 2.9, 2.999, 2.9999999999999999 
 * 
 * 
 */


#include <iostream>

int main(){
  double num;
  std::cout << "Enter a number: ";
  std::cin >> num;

  int a = num; // implicit type conversion

  std::cout.setf(std::ios::fixed);
  std::cout.precision(30);

  std::cout << "The number you entered is: " << num << std::endl;
  std::cout << "The number is: " << a << std::endl;

  return 0;
}