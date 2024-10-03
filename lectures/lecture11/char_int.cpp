/*
 * Program: Illustrates what happens if you assign an integer to a char variable
 *          and how you can perform arithmetics on char variables.
 * Author: Yiyin Zhou
 * Date: 2024/09/28
 *
 * Description:
 * This program declares a char variable letter, assigns it an small integer value.
 * The integer will be converted to a char according to ASCII table.
 * When adding an integer to the char, the char variable is converted to integer
 * to perform the arithmetics, and then the result is converted back to a char.
 * 
 */

#include <iostream>

int main() {
    char letter = 100;
    
    // print out first line
    std::cout << "The letter is: " << letter << std::endl;
    
    letter = letter + 2; // perform arithmetics on the char:
    // prints out second line
    std::cout << "The new letter is: " <<  letter << std::endl;
    
    return 0;
}