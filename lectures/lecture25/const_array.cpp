/*
 * Program: Illustrate useage of const array parameters
 * Author: Yiyin Zhou
 * Date: 2024/12/02
 *
 * Description: 
 * This program declares and defines a `printSize` function,
 * that has a const array parameter. This means that the 
 * array entries cannot be changed inside the function. 
 * This guarantees that the array passed to the function will
 * not be changed inside the function.
 * 
 * If you try to assign values to an entry of the array inside
 * the function, a compilation error will occur.
 * This is exactly what happens to the `fillZeros` function.
 * If you remove the const modifer in the `fillZeros` function,
 * the program can be successfully compiled.
 * 
 */

#include <iostream>

void printSize(const int arr[]);
void fillZeros(const int arr[], int size);

int main(){
  int myArr[4] = {1, 2, 3, 4};
  std::cout << "The size of the array is " << sizeof(myArr) << " bytes.\n";
  printSize(myArr);
}

void printSize(const int arr[]){
  // no changes can be made to arr, only reading out values
  std::cout << "The size of input is " << sizeof(arr) <<  " bytes.\n";
}

void fillZeros(const int arr[], int size){
  for (int i = 0; i < size; i++){
    arr[i] = 0; // compilation error, no writing into the const array 
  }
}
