/*
 * Program: Illustrate how to a user-defined header file.
 * Author: Yiyin Zhou
 * Date: 2024/11/10
 *
 * Description: 
 * This file hosts the main function that include
 * "sum.h" that declares the sum function.
 * 
 */

// < > to include system headers or libraries
#include <iostream> 
// " " to include user-defined headers
#include "sum.h" 

int main(){
  int b = sum(20, 10);
  return 0;
}
