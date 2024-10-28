/*
 * Program: Illustrate the usage of postincrement
 * Author: Yiyin Zhou
 * Date: 2024/10/26
 *
 * Description:
 * a++ is the postincrement, so the value of a will be
 * copied, then incremented, then the copy will be returned
 * and assign to b. So the value of b is 1.
 * 
 * Since the returned value is a temporary value, it cannot
 * be used to perform another ++ operation. 
 */

#include <iostream>

int main(){
  int a = 1;
  int b = a++;
  std::cout << "a: " << a << std::endl
            << "b: " << b << std::endl;
//   int c = a++ ++;  // @\wrongmark@ cannot apply ++ on a temporary value, returned by a++
}