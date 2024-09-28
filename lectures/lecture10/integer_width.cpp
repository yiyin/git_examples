/*
 * Program: Illustrates the use of fix-width integer types
 * Author: Yiyin Zhou
 * Date: 2024/09/28
 *
 * Description:
 * This program include the c standard library cstdint,
 * allows to use fixed-width integer types.
 * We declare a int8_t variable and assign it 100.
 * Then we print out its value. Why does it print out d?
 * Next we assign 128 to this int8_t variable.
 * What does the variable print out now? Why?
 * Lastly, we declare a int16_t variable and assign it 128.
 * Print out this variable.
 * 
 * To correct the output of the int8_t variable, follow
 * the lecture slides.
 */

#include <iostream>

// additional library of standard integer library in C
// providing fixed width integer types
#include <cstdint>

int main()
{
  
  int8_t int8_t_integer = 100;
  std::cout << "1 byte integer (100): " << int8_t_integer << std::endl;

  int8_t_integer = 128;
  std::cout << "1 byte integer (128): " << int8_t_integer << std::endl;

  int16_t int16_t_integer = 128;
  std::cout << "2 byte integer (128): " << int16_t_integer << std::endl;

  return 0;
}
