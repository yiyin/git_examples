/*
 * Program: Illustrate the property of an array formal parameter
 * Author: Yiyin Zhou
 * Date: 2024/12/02
 *
 * Description: 
 * This program declares and defines a function `printSize`
 * that has 1 array parameter.
 * 
 * In the main function, we print the size of int array of size 4.
 * It is expected to be 16 bytes.
 * In the `printSize` function, we also print the size of the
 * `arr` array parameter. It will show the size to be 8 bytes.
 * If you just print `arr` instead, it will show you a memory
 * address. Since we are on 64-bit machines, a memory address is
 * 8 bytes. You can see that the `arr` parameter is really just
 * a memory address when used as a parameter in a function.
 * 
 */

#include <iostream>
void printSize(int arr[]);

int main(){
  int myArr[4] = {1, 2, 3, 4};
  std::cout << "The size of the array is " << sizeof(myArr) << " bytes.\n";
  printSize(myArr);
}

void printSize(int arr[]){
  std::cout << "The size of input is " << sizeof(arr) <<  " bytes.\n";
}
