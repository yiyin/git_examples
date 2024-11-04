#include <iostream>

int main () {
  int i, product = 1;
  
  for ( i = 1; i <= 5; i++);  // ; at the end ends the for block. So this for loop does not have any statement.
    product = product*i;  // this statement then executes only once after the for loop is done.
  
  std::cout << i << "! = " << product << std::endl;
  return 0;
}