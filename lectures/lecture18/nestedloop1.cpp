/*
 * Program: Illustrate how to use nested loop
 * Author: Yiyin Zhou
 * Date: 2024/11/02
 *
 * Description: 
 * A nested loop is a loop inside a loop.
 * You just need to remember 1 rule:
 * all the statements (including another loop)
 * inside a loop must be executed before go to
 * the next iteration. 
 * That means the inner loop must loop over
 * j = 0, j = 1, j= 2, before the outer loop
 * i is updated.
 * 
 */

#include <iostream>

int main () {
  
  for (int i = 0; i < 3; i++) {  // outer loop 
    for (int j = 0; j < 3; j++) {  // inner loop
      std::cout << i << ", " << j << std::endl;
    }
  }
  
  return 0;
}
