#include <iostream>

int main () {
  int BASE_SIZE = 8;
  
  for (int row = 1; row <= BASE_SIZE; row++) {
    for (int col = 1; col <= row; col++) {
        std::cout << "*";
    }
    std::cout << std::endl;
  }
  
  return 0;
}