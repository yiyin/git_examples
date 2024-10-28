/*
 * Program: Illustrate the usage of preincrement
 * Author: Yiyin Zhou
 * Date: 2024/10/26
 *
 * Description:
 * ++a is the preincrement, so the value of a will be
 * incremented, then the resulting value of a will be
 * returned and assign to b. So the value of b is 2.
 * 
 * Note that a reference to the object a returned, so
 * it can be used again in a ++ operator. So the
 * value of c is 4. 
 */
#include <iostream>

int main(){
  int a = 1;
  int b = ++a; // pre-increment
  std::cout << "a: " << a << std::endl
            << "b: " << b << std::endl;
  int c = ++ ++a; // pre-increment twice
  std::cout << "a: " << a << std::endl
            << "c: " << c << std::endl;
}
