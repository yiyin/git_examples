/*
 * Program: Illustrates the name shadowing
 * Author: Yiyin Zhou
 * Date: 2024/10/04
 *
 * Description:
 * This program declares an std::string variable named `string`.
 * Since we used the using directive `using namespace std;`,
 * the string type name does not need to be qualified by `std::`.
 * In this case, we are not declaring the variable string twice,
 * because one of the name string is a type name.
 * However, as we declare the variable string, the name
 * string now can only be referred to the variable name.
 * You can no long use string to refer to the type name.
 * This is called string shadowing.
 * If now you uncomment line 28, you will get an error in compilation.
 */

#include <iostream>
#include <string>
using namespace std;

int main(){
  string string;  // variable shadowing, bad practice, should avoid
  cout << "Enter some text: ";
  cin >> string; 

  // string text = "new string"; 

  cout << "The text you entered was: " << string << endl;
  return 0;
} 