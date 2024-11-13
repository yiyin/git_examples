/*
 * Program: Illustrate how to generate pseudo-random numbers
 * Author: Yiyin Zhou
 * Date: 2024/11/10
 *
 * Description: 
 * This program generates 10 random numbers, but each
 * run will generate the same sequence of 10 random numbers.
 * This is because we use a fixed seed for the pseudo-random
 * number generator. 
 * 
 */

#include <iostream>
#include <cstdlib>

int main(){
  std::srand(100); //using 100 as the seed. The seed determine the sequence of generated numbers.
  
  for (int i = 0; i < 10; i++)
  {
    // rand() returns an signed integer between 0 and RAND_MAX
    std::cout << i << ": " << std::rand() << std::endl;
  }

  return 0;
}
