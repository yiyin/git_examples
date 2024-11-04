#include <iostream>
#include <cmath>

int main () {
  double y = 2;

  for (double x = y*y*y; x > 2.0; x = std::sqrt(x))
    std::cout << "x is equal to " << x << std::endl;

  return 0;
}
