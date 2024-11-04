/*
 * Program: Illustrate how to use nested loop
 * Author: Yiyin Zhou
 * Date: 2024/11/02
 *
 * Description: 
 * This program prints out a triangular * pattern
 * like the following
 * *
 * **
 * ***
 * ****
 * *****
 * ******
 * *******
 * ********
 * 
 * Unlike in nestedloop1.cpp, the inner loop in this
 * program depends on the value of the outer loop
 * variable: col <= row. 
 * Therefore, in each iteration of the outer loop,
 * the stop condition for the inner loop is different.
 * This allows the program to print out different
 * number of stars in each line.
 * 
 */

#include <iostream>

int main () {
  int BASE_SIZE = 8;
  
  for (int row = 1; row <= BASE_SIZE; row++) {
    for (int col = 1; col <= row; col++) {
        std::cout << "*";
    }
    std::cout << std::endl;
  }
  
  return 0;
}