/*
 * Program: Illustrate that array parameters are call-by-reference
 * Author: Yiyin Zhou
 * Date: 2024/12/02
 *
 * Description: 
 * In this program, we declare a `myList` array,
 * then pass it to the `fillList` function.
 * Inside the function, we are going to assign the array
 * parameter `list` some values.
 * After the function is returned, we will print out
 * the values of the entries in `myList`.
 * You can expect the values to be the values you entered.
 * This shows that the array parameter is using call-by-reference
 * like mechanism. 
 * 
 */


#include <iostream>

// fill the elements of list line by line
// `size` is the size of list
void fillList(int list[], int size);

int main(){
  const int SIZE = 5;
  int myList[SIZE];
  
  fillList(myList, SIZE); // fill the array, myList will have values entered by the user in fillList function
  for(int i = 0; i < SIZE; i++)
  {
    std::cout << myList[i] << std::endl;
  }
  return 0;
}

void fillList(int list[], int size){
  for (int i = 0; i < size; i++){ // fill all elements of the array list
    std::cout << "enter an integer: ";
    std::cin >> list[i];  // will affect the argument array passed into this function
  }
}