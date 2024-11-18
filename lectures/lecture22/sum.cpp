/*
 * Program: defines the sum function.
 * Author: Yiyin Zhou
 * Date: 2024/11/10
 *
 * Description: 
 * This file defines the sum function. Note that:
 * 1. It first include the header file. This is
 *    not necessary in this particular program.
 *    However, if we have two functions declared
 *    in sum.h and one of the functions uses 
 *    the other function here, then it is necessary
 *    to include sum.h, otherwise, the function
 *    being used is not defined. For example, if you
 *    uncomment the plus function here and in the
 *    sum.h header file, and then comment out the
 *    include directive here, then you will see the
 *    error during compilation.
 * 2. This cpp file does not have a main function.
 * 
 */

#include "sum.h"

// int plus(int a, int b)
// {
//   return sum(a, b);
// }

// Function definition
int sum(int a, int b)
{
  return a + b;
}



