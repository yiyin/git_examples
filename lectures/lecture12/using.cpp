/*
 * Program: Illustrates how to use the using directive for individual names.
 * Author: Yiyin Zhou
 * Date: 2024/10/04
 *
 * Description:
 * Instead of `using namespace std;`,
 * we use the individual names:
 * using std::cout, std::cin, std::endl, std::string;
 */


#include <iostream>
#include <string>
using std::cout, std::cin, std::endl, std::string;

int main(){
  string text;
  cout << "Enter some text: ";
  cin >> text;
  
  cout << "The text you entered was: " << @\alert{text}@ << endl;
  return 0;