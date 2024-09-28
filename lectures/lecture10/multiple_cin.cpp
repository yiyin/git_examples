/*
 * Program: Illustrates how to get inputs to multip variable in one statement.
 * Author: Yiyin Zhou
 * Date: 2024/09/28
 *
 * Description:
 * This program declares an integer variable age,
 * and a double variable height,
 * then ask user for their values in one statement.
 * Finally, it prints out the age and height entered
 * by the user.
 *
 * Attention: when running the program and entering
 * the values, what happens if you enter a real number
 * with a decimal point instead of an integer for age?
 */

#include <iostream>

int main() {
  int age;  
  double height;

  std::cout << "Enter your ae and height (in meters), \
separated by space: ";
  std::cin >> age >> height; // Get inputs for age and height;

  // set boolalpha FLAG to print boolean values as true/false,
  // instead of 1/0.
  std::cout << std::boolalpha; 
  std::cout << "cin has failed? " << std::cin.fail() << std::endl;

  // notice the whitespace at the beginning and end of some strings
  // what happens if you use "meters" instead of " meters"?
  std::cout << "You entered: Age = " << age <<
               ", Height = " << height << " meters." << std::endl;

  return 0;
}
