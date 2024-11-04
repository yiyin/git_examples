/*
 * Program: Illustrate scope inside the for loop
 * Author: Yiyin Zhou
 * Date: 2024/11/02
 *
 * Description: 
 * Loop variable i is decalred outside of the loop,
 * so the value i holds will be updated in the loop,
 * and it can still be accessed after the loop ends.
 * 
 */


#include <iostream>

int main(){
  int i, product=1;

  for ( i=1; i<=5; i++) {
    product = product*i;
  }
  
  std::cout << i << std::endl; // what's the value of i?
  return 0;
}