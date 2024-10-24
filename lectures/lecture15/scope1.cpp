/*
 * Program: Illustrate block scope and variable shadowing
 * Author: Yiyin Zhou
 * Date: 2024/10/23
 *
 * Description:
 * This program declares two variable a, one in the main
 * function scope, one in the if block scope.
 * Since the two declarations are in different scopes,
 * this is allowed, but a = 5 will be shadowed by
 * a = 8 inside the block scope, until the block is 
 * closed. 
 */

#include <iostream>
using std::cout, std::endl;

int main () {
   int a = 5, b = 10;
   if ( a >= 3 ) {
      // this declaires a new variable a in the block scope
      int a = 8; 

      // a = 8 will overshadow the other variable a = 5.
      cout << a << " " << b << endl;
   } // once the block is closed, the variables
     // that were declared inside the block will be
     // destoyed. 

   // since the variable a that holds the value 8 was
   // destroyed, the other variable a that was declared
   // in the main function scope a = 5 is now out of
   // the shadow.
   cout << a << " " << b << endl;
   return 0;
}