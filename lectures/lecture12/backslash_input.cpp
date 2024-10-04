/*
 * Program: string input.
 * Author: Yiyin Zhou
 * Date: 2024/10/04
 *
 * Description:
 * Here is the code to get a string input and then printed out.
 * Try to input some text with a backslash in it and see what 
 * is printed out. You should see the backslash being interpreted
 * literally in the user input, not an escape sequence.
 * Now thing about what string value does the `text` variable have?
 * 
 * 
 */

#include <iostream>
#include <string>

int main(){
  std::string text;
  std::cout << "Enter some text: ";
  std::cin >> text; // backslash will be interpreted literally in a user input
  
  std::cout << "The text you entered was: " << text << std::endl;
  return 0;
} 
