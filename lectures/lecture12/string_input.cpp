/*
 * Program: Illustrates how to get user input as strings
 * Author: Yiyin Zhou
 * Date: 2024/10/04
 *
 * Description:
 * This program declares two std::string variables `first_name` and `last_name`.
 * As the names suggests, the `first_name` variable will be used to store
 * the first name the user entered on, the `last_name` stores the last name.
 * Then the program asks for the first name and stream the input to `first_name'.
 * Similarly, the program asks for the last name and streams input to `last_name`.
 * Finally, a welcome message is printed out using the full name.
 * 
 * Note: try entering one of the names that has two words, such as van Nistelrooy.
 * What happen to the output?
 */

#include <iostream>
#include <string> // include the string library

int main(){
    std::string first_name, last_name;  // declare string variables
    std::cout << "Enter your first name: ";  // prompt for first name
    std::cin >> first_name;  // user input will become the value of first_name
    
    std::cout << "Enter your last name: ";  // prompt for last name
    std::cin >> last_name;  // user input will become the value of last_name
    
    std::cout << "Hello! " << first_name << " " << last_name << std::endl;
    return 0;
}
