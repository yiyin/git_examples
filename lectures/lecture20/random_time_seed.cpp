/*
 * Program: Illustrate how to generate pseudo-random numbers
 * Author: Yiyin Zhou
 * Date: 2024/11/10
 *
 * Description: 
 * Compared to random_fixed_seed.cpp, this program now
 * sets the random seed based on the current time, so
 * each run of the program can have different results.
 * 
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
  //time(0) returns the Unix time: the number of seconds elapsed since January 1, 1970.
  std::srand(std::time(0)); 
  
  // RAND_MAX is a constant provided by the standard library in cstdlib
  std::cout << RAND_MAX << std::endl;

  for (int i = 0; i < 10; i++)
  {
     std::cout << i << ": " << std::rand() << std::endl;
  }

  return 0;
}
