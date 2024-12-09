/*
 * Program: Illustrate how to use multi-dimensional array as function parameter
 * Author: Yiyin Zhou
 * Date: 2024/12/04
 *
 * Description: 
 * This program shows that when using a multi-dimensional array
 * as function parameter, multiple [] need to be put in the array
 * parameter, matching the dimension of the array. 
 * In addition, the size of each dimension except the first dimension,
 * need to be indcluded. 
 * 
 */


#include <iostream>

// prints the elements of list
void printList(int list[][3], int size);

int main(){
  const int SIZE = 2;
  int myList[SIZE][3] = { 
    {1, 2, 3},
    {4, 5, 6}
  };  
  printList(myList, SIZE); // passing array myList into the function
  return 0;
}

void printList(int list[][3], int size){
  for (int i = 0; i < size; i++){
    for (int j = 0; j < 3; j++){
      std::cout << list[i][j] << "\t";
    }
    std::cout << std::endl;
  }
}

