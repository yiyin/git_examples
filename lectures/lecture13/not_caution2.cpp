/*
 * Program: Illustrates the danger of not understanding the precedence of ! operator.
 * Author: Yiyin Zhou
 * Date: 2024/10/10
 *
 * Description:
 * This example shows that the ! operator has very high precedence,
 * therefore, without the parenthsis around soupTemp<80 like in not_caution1.cpp,
 * ! takes precedence over the < operator, so the order of evaluation is
 * !soupTemp, taking the not operator of the soupTemp,
 * then the resulting boolean value is compared with 80. 
 * The boolean value will get implicitly converted to integer, which can only be
 * 0 or 1, and compared to 80. So this condition is always true.
 * 
 * As a result, the program will print out "This soup is just right!"
 * when soupTemp is any number less than 95.
 * 
 */

#include <iostream>

int main () {
   float soupTemp;

   std::cout << "What is your soup temperature? ";
   std::cin >> soupTemp;
   
   if ( !soupTemp < 80 && soupTemp < 95 )
   // equivalent to ((!soupTemp) < 80) && (soupTemp < 95)
   // ! is first applied to soupTemp
      std::cout << "This soup is just right!\n";
   else
      std::cout << "This soup is no good!\n";
  return 0;
}