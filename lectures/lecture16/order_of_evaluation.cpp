/*
 * Program: Illustrate order of evaluation
 * Author: Yiyin Zhou
 * Date: 2024/10/26
 *
 * Description: The output of this program is not
 * determined. It depends on the compiler or each run.
 * The c++ standard does not specify an order whether
 * a (on the left of +) or ++a (on the right of +) will
 * be evaluated first. 
 * 
 * If a is evaluated first then ++a, the result of the
 * plus is 1 + 2 = 3. If a++ is evaluated first, then
 * when a is evaluated, it is already 2, so the result
 * is 2 + 2 = 4.
 * 
 */

#include <iostream>

int main(){
  int a = 1;
  int b = a + ++a;
  std::cout << "a: " << a << std::endl
            << "b: " << b << std::endl;
  return 0;
}