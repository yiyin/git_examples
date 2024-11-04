/*
 * Program: Illustrate how to use for loop
 * Author: Yiyin Zhou
 * Date: 2024/11/02
 *
 * Description: 
 * This code counts down till New Year using a for loop.
 * Compare that with the implementation using while loop
 * in Lecture 17.
 */

#include <iostream>

int main(){
  
  for(int number = 3; number > 0; number--)
  {
    std::cout << number << " days until New Year\n";
  }
  
  std::cout << "Happy New Year!\n";
  
  return 0;
}