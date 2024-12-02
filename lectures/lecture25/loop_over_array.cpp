/*
 * Program: Illustrate iterate over an array.
 * Author: Yiyin Zhou
 * Date: 2024/12/02
 *
 * Description: 
 * This program iterate through the an array of size 5
 * and assign to each entry an integer equal to the 
 * index + 1. Then we print out the entire array.
 * 
 */

#include <iostream>

int main(){
  const int SIZE = 5;
  int array[SIZE];
  
  // Assigning values to array elements
  for(int i = 0; i < SIZE; ++i){
    array[i] = i+1;
  }

  // Print out values of array elements
  for(int i = 0; i < SIZE; ++i){
    std::cout << i << ": " << array[i] << std::endl;
  }
  
  return 0;
}