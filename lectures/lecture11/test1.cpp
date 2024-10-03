#include <iostream>

int main(){
  int a = 13, b = 10;
  a /= a-b; 
  std::cout << a << std::endl; 

  return 0;
}
