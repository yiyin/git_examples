/* 
 * Program: Illustrates the difference between type suffix f and d.
 * Author: Yiyin Zhou
 * Date: 2024/09/28
 *
 * Description:
 * This program initializes double variables var1 and var2
 * with two float literals, both with 3.14159 but one with
 * suffix f and the other with suffix d.
 * Then it prints out var1 and var2.
 * Check if the two double variables have the same value?
 */

#include <iostream>

int main()
{
  double var1 = 3.14159f;  // suffix f means a FP32 float literal
  double var2 = 3.14159d;  // suffix d means a FP64 float literal

  std::cout.setf(std::ios::fixed); // set precision to be decimal places
  std::cout.precision(10);  // set precision to 10

  std::cout << "Value of 3.14159f is: " << var1 << std::endl;
  std::cout << "Value of 3.14159d is: " << var2 << std::endl;

  return 0;
}
