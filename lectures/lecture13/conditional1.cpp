/*
 * Program: Simple example of using if ...  else ... conditionals
 * Author: Yiyin Zhou
 * Date: 2024/10/10
 *
 * Description:
 * This program asks the user for the number of hours worked and
 * stores that value in a variable `hours_worked`.
 * Then based on the value of `hours_worked`, if it is less than
 * 30, then the wage is 18. If the user worked more than or equal
 * to 30 hours, then the wage is 20.
 * Finally, the program outputs the total pay based on the 
 * hours worked and the per hour wage.
 */

#include <iostream>

int main(){
    int hours_worked;
    std::cout << "Please enter the number of hours you worked: ";
    std::cin >> hours_worked;  // removed all prompts for simplicity

    double wage_per_hour;    
    // condition on the hours_worked, and compare to 30
    if (hours_worked < 30) // hours_worked < 30 results in a boolean value
        wage_per_hour = 18; // only a single statement is allowed
    else // the case for hours_worked >= 30
        wage_per_hour = 20; // only a single statement is allowed
    
    // This is outside the if-else
    std::cout << "Total pay is $" << wage_per_hour * hours_worked << std::endl;
    return 0;
}