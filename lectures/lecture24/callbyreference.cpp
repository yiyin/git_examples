/*
 * Program: Illustrate how to use call-by-reference
 * Author: Yiyin Zhou
 * Date: 2024/11/23
 *
 * Description: 
 * This example demonstrate the use of call-by-reference
 * parameter in a function definition and that how
 * the arguments passed into the function can be 
 * changed direclty inside the function through the
 * reference.
 * 
 * In particular, we declared two variables a and b
 * in the main function and initialized them.
 * Then we pass a and b to the function swap.
 * Since swap has two call-by-reference parameters,
 * and the two parameters swap their values inside
 * the function, the values of a and b are also
 * swapped after the function call. Therefore, when
 * we print out the value of a and b after the 
 * function call, their values have been swapped.
 * 
 */

#include <iostream>

void swap(int& input1, int& input2); // function declaration

int main(){
  int a = 2, b = 10;
  std::cout << "original values: ";
  std::cout << "a: " << a << ", b: " << b << std::endl;
  swap(a, b);  
  std::cout << "after swap function call completes: ";
  // The value of a and be will be swapped after calling swap function. Compare to the program has the call-by-value parameters
  std::cout << "a: " << a << ", b: " << b << std::endl;


  return 0;
}

// this function swap the value of the input arguments
void swap(int& input1, int& input2)
{
  int c = input2;
  input2 = input1;
  input1 = c;
}