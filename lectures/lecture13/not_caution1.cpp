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
