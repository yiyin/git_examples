#include <iostream>

int sum(int a, int b); // function declaration

int main() {
  int i = sum(10, 32);
  int j = sum(i, 66);
  std::cout << "The value of j is" << j << std::endl; // 108
  return 0;
}

int sum(int a, int b)  // function definition
{
    return a + b;
}
