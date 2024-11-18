/*
 * Program: Generates 10 random numbers uniformedly
 * distrcributed between 0 and 1.
 * Author: Yiyin Zhou
 * Date: 2024/11/10
 *
 * Description: 
 * This program prints 10 random numbers in [0, 1].
 * Since rand() function returns and integer, it
 * is first converted to a double using the 
 * static_case<double> function. Then the double value
 * is divided by RAND_MAX to bring the range to
 * [0, 1].
 * 
 */

#include <iostream>
#include <cstdlib>
#include <ctime>

int main(){
  std::srand(std::time(0));

  for (int i = 0; i < 10; i++)
  {
    // a function to convert an int to a double
    std::cout << i << ", " << 
    static_cast<double>(std::rand())/RAND_MAX << std::endl;
  }

  return 0;
}