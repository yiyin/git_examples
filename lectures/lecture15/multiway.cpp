/*
 * Program: Illustrate how to use multi-way if elseif else
 * Author: Yiyin Zhou
 * Date: 2024/10/23
 *
 * Description:
 * This program demonstrates how to use multiway
 * if elseif else statement.
 */


#include <iostream>
using std::cout, std::cin;

int main() {
    int number;
    // Ask the user for a number
    cout << "Enter a number: ";
    cin >> number;

    if (number == 0) {
        cout << "The number is zero.\n";
    } else if (number > 0) {
        cout << "The number is positive.\n";
    } else { // number < 0 <-- add a comment here as condition, for clarity 
        cout << "The number is negative.\n";
    }
    return 0;
}