/*
 * Program: Illustrates the precedence of the NOT (!) operator
 * Author: Yiyin Zhou
 * Date: 2024/10/10
 *
 * Description:
 * This example shows that the ! operator has very high precedence,
 * therefore, (soupTemp < 80) is first evaluated, followed by
 * !(sourpTemp<80). The result of this enters the && logic with soupTemp < 95.
 * Therefore, the if condition evaluates to be true when both
 * soupTemp >= 80 is true and
 * soutTemp < 95 is true. 
 * The soup is just right only in between these two temperature.
 * 
 */

#include <iostream>

int main () {
   float soupTemp;

   std::cout << "What is your soup temperature? ";
   std::cin >> soupTemp;
   
   if ( !(soupTemp < 80 ) && (soupTemp < 95) ) // equivalent to (!(soupTemp < 80)) && (soupTemp < 95)
      std::cout << "This soup is just right!\n";
   else
      std::cout << "This soup is no good!\n";
  return 0;
}
