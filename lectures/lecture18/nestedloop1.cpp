#include <iostream>

int main () {
  
  for (int i = 0; i < 3; i++) {  // outer loop 
    for (int j = 0; j < 3; j++) {  // inner loop
      std::cout << i << ", " << j << std::endl;
    }
  }
  
  return 0;
}
