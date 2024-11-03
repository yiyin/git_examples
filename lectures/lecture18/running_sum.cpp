/*
 * Program: Illustrate how to use loop
 * Author: Yiyin Zhou
 * Date: 2024/11/02
 *
 * Description: 
 * The code adds the numbers that a user enters
 * until the user enters 0.
 * 
 */



#include <iostream>

using std::cout, std::cin, std::endl;

int main(){
   double running_sum = 0.0; // initialize the running sum
   double tmp;
   
   while (true){
      cout << "Enter a number to add up (0 to quit): ";
      cin >> tmp;  // ask for a number

      if (tmp == 0) {
          break;   // 0 entered by user indicates to stop
      }

      running_sum += tmp;  // add to the running sum
      cout << "running total: " << running_sum << endl;
   }
   
   cout << "The total is: " << running_sum << endl;
   return 0;
}
