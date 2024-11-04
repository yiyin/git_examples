#include <iostream>

int main(){
  int product = 1;
  
  for (int i = 1; i <= 5; i++) {
    product = product*i;
  }

  std::cout << i << std::endl; // what's the value of i?
  return 0;
}