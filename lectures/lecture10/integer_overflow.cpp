/*
 * Program: Illustrates the concept of integer overflow
 * Author: Yiyin Zhou
 * Date: 2024/09/28
 *
 * Description:
 * This program declares an uint32_t fixed width unsigned integer
 * with the largest value in its range 4294967295, and print it out.
 * Then we add 1 to this variable num.
 * When print out the num value after the addition, what does it
 * print out? This is the effect of integer overflow.
 */

#include <iostream>
#include <cstdint>

int main()
{
  uint32_t num = 4294967295;
  std::cout << "The maximum value represented by uint32_t: "
	    << num << std::endl;

  num = num + 1;
  std::cout << "Adding 1 to the maximum value represented by uint32_t: "
	    << num << std::endl;

  return 0;
}
