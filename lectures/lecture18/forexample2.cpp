#include <iostream>

int main () {
  int product=1;

  for (int i=0; i<=20; i+=5)
    product = product*i;

  std::cout << product << std::endl;  
  return 0;
}