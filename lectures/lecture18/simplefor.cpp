/*
 * Program: Illustrate how to use for loop.
 * Author: Yiyin Zhou
 * Date: 2024/11/02
 *
 * Description: 
 * This is a simple example of using for loop 
 * that adds up integers from 1 to 10.
 * 
 */


#include <iostream>

int main(){
  int sum = 0;
  
  for ( int n = 1; n <= 10; n++ ) {
    sum += n;
    std::cout << n << ": " << sum << std::endl;
  }

  return 0;
}