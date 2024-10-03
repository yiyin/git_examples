/*
 * Program: Illustrates implicit type conversions
 * Author: Yiyin Zhou
 * Date: 2024/09/28
 *
 * Description:
 * This program an int variable but assigns it a double value.
 * It also assigns an integer value to a double variable.
 * 
 * 
 */

#include <iostream>
int main() {
    int x = 2.99;  
    std::cout << x << std::endl;  // will print out: 2

    double y = 2;  // It's still of type double.
    return 0;
}
