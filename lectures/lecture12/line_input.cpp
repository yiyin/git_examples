/*
 * Program: Illustrates how to get an entire line of input 
 * Author: Yiyin Zhou
 * Date: 2024/10/04
 *
 * Description:
 * This program declares a string variable `text`, ask user for input.
 * However, instead of using `std::cin >> text;` directly, 
 * the `std::getline` function is called and we put `std::cin` as
 * one input to the function and the variable `text` as the second input
 * to the function.
 * Now if the user enter text with whitespace / tab in it, it won't be
 * broken up. 
 */

#include <iostream>
#include <string>

int main(){
  std::string text;
  std::cout << "Enter some text: ";
  std::getline(std::cin, text); // stream the entire line of input to text
  
  std::cout << "The text you entered was: " << text << std::endl;
  return 0;
} 
