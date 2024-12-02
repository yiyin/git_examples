/*
 * Program: Illustrate how out-of-range can impact other variables in a program
 * Author: Yiyin Zhou
 * Date: 2024/12/02
 *
 * Description: 
 * In this program, we declare two variables x and y.
 * We then declare an array of size 3. 
 * The program will then print out the addresses of the variables
 * x and y, as well as the starting address of the array.
 * That way we can see the relation between the addresses.
 * 
 * Then the program will ask you for an index, and change the value
 * corredponding to the array indexed at that value to 10. 
 * The program will then print out the values of x and y again.
 * 
 * If you give a index greater than 2, it goes out of range of
 * the array. However, the compiler won't warn you about that
 * since the value is dynamically determined.
 * 
 * Now try out a few index values to see how an out-of-range
 * index can impact other, unrelated variables.
 * 
 * Lastly, try out a really large number and see what error you get
 * when running the program.
 * 
 */

#include <iostream>

int main(){
  // we will declare an int and a long.
  int x = 20;
  long y = 20;
  // we then declare an array.
  int arr[3] = {2, 4, 6};

  // We will print out the memory address of 
  std::cout << "address of x: \t" << &x << "\t value of x: " << x << std::endl;
  std::cout << "address of y: \t" << &y << "\t value of y: " << y << std::endl;
  // When we print the array variable arr, it will decay to an address 
  std::cout << "address of arr: " << arr << std::endl;

  // We will use num to obtain an index of user's choice
  int num;
  std::cout << "which entry of the array to change? ";
  std::cin >> num;

  // We then change the value of arr index at num to 10.
  std::cout << "Changing index " << num << " to 10.\n";
  arr[num] = 10;

  // Now let's see what happens to the value of x and y.
  std::cout << "value of x: " << x << std::endl;
  std::cout << "value of y: " << y << std::endl;

  return 0;
}