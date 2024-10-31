/*
 * Program: Illustrates an infinite loop
 * in a loop condition
 * Author: Yiyin Zhou
 * Date: 2024/10/30
 *
 */


#include <iostream>
int main(){
  int counter = 0; 
  while (counter != 23) {
    std::cout << counter << std::endl;
    counter += 5;
    }
  return 0;
}
