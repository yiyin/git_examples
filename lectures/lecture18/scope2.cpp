/*
 * Program: Illustrate scope inside the for loop
 * Author: Yiyin Zhou
 * Date: 2024/11/02
 *
 * Description: 
 * Loop variable i is decalred in the loop,
 * so the value i cannot be accessed after the loop ends.
 * This code will result in compilation error.
 * 
 */


#include <iostream>

int main(){
  int product = 1;
  
  for (int i = 1; i <= 5; i++) {
    product = product*i;
  }

  std::cout << i << std::endl; // what's the value of i?
  return 0;
}