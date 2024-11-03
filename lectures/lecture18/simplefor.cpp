#include <iostream>

int main(){
  int sum = 0;
  
  for ( int n = 1; n <= 10; n++ ) {
    sum += n;
    std::cout << n << ": " << sum << std::endl;
  }

  return 0;
}