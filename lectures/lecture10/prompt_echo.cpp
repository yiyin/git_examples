/*
 * Program: Illustrates how to prompt user for inputs and echo the inputs.
 * Author: Yiyin Zhou
 * Date: 2024/09/28
 *
 * Description: This program ask for age and height separately with two prompts.
 * Then echo the user's inputs to provide the user with how the program 
 * understands the inputs.
 *
 */

#include <iostream>

int main()
{
  int age; // declare a variable for age
  double height; // declare a variable for height

  std::cout << "Enter your age: "; // prompt for 1 input
  std::cin >> age;

  std::cout << "Enter your height (in meters): "; // prompt for another input
  std::cin >> height;

  // echoing the input
  std::cout << "You entered: Age = " << age << // echo inputs
               ", Height = " << height << " meters" << std::endl;
return 0;
}
