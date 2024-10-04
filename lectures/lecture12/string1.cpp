/*
 * Program: Illustrates how to decalre a string type variable
 * Author: Yiyin Zhou
 * Date: 2024/10/04
 *
 * Description:
 * This program declares an std::string variable named `day`.
 * Then day is assigned a value "Monday" using a string literal.
 * Finally, the value of `day` is printed out.
 */

#include <iostream>
#include <string> // include the string library

int main(){
  std::string day;  // declare a string variable named day
  
  day = "Monday";  // assign "Monday" to day
  std::cout << day << std::endl;  // print out the value of day
  
  return 0;
}