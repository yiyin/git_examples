/*
 * Program: Illustrates the same name in two namespaces can coexist in a program
 * Author: Yiyin Zhou
 * Date: 2024/10/04
 *
 * Description:
 * This program declares an std::string variable named `string`,
 * which is the same as the type name. 
 * However, since the type name `string` is in the std namespace,
 * and the variable name `string` is in the global namespace,
 * they will not create a conflict.
 * Therefore, the code can be properly executed.
 */

#include <iostream>
#include <string>

int main(){
  std::string string;  /* string is then defined in the global scope
                 while std::string is the string defined in std namespace*/
  std::cout << "Enter some text: ";
  std::cin >> string; 
  
  std::cout << "The text you entered was: " << string << std::endl;
  return 0;
} 