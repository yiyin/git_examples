/*
 * Program: Illustrates the effect of pre-increment
 * in a loop condition
 * Author: Yiyin Zhou
 * Date: 2024/10/30
 *
 */

#include <iostream>
int main(){
  int a = 0; 
  while ( ++a < 3) { 
    std::cout << a << " Mississippi.\n";
    }
  return 0;
}
