/*
 * Program: Illustrates the difference between using type suffix for integers.
 * Author: Yiyin Zhou
 * Date: 2024/09/28
 * 
 * Description:
 * This program declares an int variable and initialize it with
 * an integer literal 2247483647 which is outside the range of an int.
 * Then it declaires an unsigned int var2 and initialize it with
 * the same integer literal.
 * It also declaires an unsigned int var3 and initialize it with
 * the same number but now with a type suffix u.
 * Finally, it prints out the values of these three variables.
 * Why var1 is printed as a negative value?
 * Why var2 and var3 are printed correctly?
 * What's the difference between var2 and var3's initialization?
 */

#include <iostream>

int main()
{
  int var1 = 2247483647; // 
  unsigned int var2 = 2247483647;
  unsigned int var3 = ___________;

  std::cout << "Value of var1 is: " << var1 << std::endl;
  std::cout << "Value of var2 is: " << var2 << std::endl;
  std::cout << "Value of var3 is: " << var3 << std::endl;

  return 0;
}
