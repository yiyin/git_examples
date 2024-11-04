/*
 * Program: Illustrate what happens when you add ; after the for statement.
 * Author: Yiyin Zhou
 * Date: 2024/11/02
 *
 * Description: 
 * In this code, we added a ; after the for statement.
 * This will result in the for loop being executed without
 * any additoinal statements. But the for loop update will
 * still be applied and condition checked after each iteration.
 * The product = product*i; statement is independent of the for loop.
 * 
 */


#include <iostream>

int main () {
  int i, product = 1;
  
  for ( i = 1; i <= 5; i++);  // ; at the end ends the for block. So this for loop does not have any statement.
    product = product*i;  // this statement then executes only once after the for loop is done.
  
  std::cout << i << "! = " << product << std::endl;
  return 0;
}