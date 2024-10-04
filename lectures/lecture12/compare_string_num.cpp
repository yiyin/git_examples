/*
 * Program: Illustrates the difference between streaming input to a string
 and streaming it to a double.
 * Author: Yiyin Zhou
 * Date: 2024/10/04
 *
 * Description:
 * This program declares a string variable `pi_string`,
 * and a double variable `pi_num`.
 * It askes user for the value of pi twice, the first time
 * that value is streamed into the string variable,
 * the second time it is streamed into a double variable.
 * Print out the two variables and see the difference.
 * 
 * 
 */

#include <iostream>
#include <string> // include the string library

int main(){
    std::string pi_string;
    double pi_num;

    std::cout << "Enter pi as a string: "; 
    // entering 3.14159265358979323846264338327950288419716939937510
    std::cin >> pi_string;
    
    std::cout << "Enter pi to assign to a double: ";
    // entering 3.14159265358979323846264338327950288419716939937510
    std::cin >> pi_num;
    
    std::cout.setf(std::ios::fixed);
    std::cout.precision(30);

    std::cout << "pi_string is\t" << pi_string << std::endl;
    std::cout << "pi_num is\t" << pi_num<< std::endl;
    return 0;
}
