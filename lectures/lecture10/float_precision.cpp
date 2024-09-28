/*
 * Program: Illustrates the precision of float, double and long double
 *          using the value of pi
 * Author: YIyin Zhou
 * Date: 2024/09/28
 * 
 * Description:
 * This program prints how the value of pi with 25 decimal places
 * using a string, a float, a double and a long double.
 * Compare the output of the numeric variables to that of the
 * string variable (ground truth), count how many digits are 
 * accurate for each of the three floating point types.
 */

#include <iostream>

int main()
{
  // Prints the ground truth up to 25 decimal places of PI
  std::cout << "Groud Truth pi is: 3.1415926535897932384626433\n";

  // set precision to 30 decimal places
  std::cout.setf(std::ios::fixed);
  std::cout.precision(30);
  
  // define a float using the type suffix f, but the same 25 decimal places
  float ft_pi = 3.1415926535897932384626433f;
  std::cout << "The float pi is: " << ft_pi << std::endl;

  // define a double using the type suffix d
  double db_pi = 3.1415926535897932384626433d;
  std::cout << "The double pi is: " << db_pi << std::endl;

  // define a long double using the type suffx L
  long double ld_pi = 3.1415926535897932384626433L;
  std::cout << "The long double pi is: " << ld_pi << std::endl;

  return 0;
}
