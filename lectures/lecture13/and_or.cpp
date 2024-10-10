/*
 * Program: Illustrates the precedence of && and || operator.
 * Author: Yiyin Zhou
 * Date: 2024/10/10
 *
 * Description:
 * This example A || B && C,
 * where A is soupTemp < 80,
 * B is soupTemp != 90
 * C is soupTemp < 95.
 * 
 * Since && operator has higher precedence than ||,
 * B && C is evaluated first.
 * The result then enters the || operation,
 * so it is equivalent to A || (B && C).
 * Remember the && operation is executed first.
 */

#include <iostream>

int main () {
   float soupTemp;

   std::cout << "What is your soup temperature? ";
   std::cin >> soupTemp;
   
   if ( soupTemp < 80 || soupTemp != 90 && soupTemp < 95 )
   // equivalent to (soupTemp < 80) || ((soupTemp != 90) && (soupTemp < 95))
      std::cout << "This soup is just right!\n";
   else
      std::cout << "This soup is no good!\n";
  return 0;

}