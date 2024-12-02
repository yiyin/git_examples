/*
 * Program: Illustrate how to declare a function that takes an array as input
 * Author: Yiyin Zhou
 * Date: 2024/12/02
 *
 * Description: 
 * This program declares and defines a function printList
 * that accepts an array as input. The array parameter 
 * has a [] with it. An additional parameter "size" is also
 * needed. 
 * 
 * When you call the function, you pass the array name to
 * the function where an array is expected (1st argument).
 * 
 */


#include <iostream>

// prints the elements of list line by line
// `size` is the size of list
void printList(int list[], int size);

int main(){
  const int SIZE = 5;
  int myList[SIZE] = {1, 3, 5, 7, 9};
  
  printList(myList, SIZE); // passing array myList into the function
  return 0;
}

void printList(int list[], int size){
  for (int i = 0; i < size; i++){ // print all elements of the array list
    std::cout << list[i] << std::endl;
  }
}