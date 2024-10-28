/*
 * Program: Illustrate switch statement
 * Author: Yiyin Zhou
 * Date: 2024/10/26
 *
 * Description: Based on the value of the variable letter,
 * match it with the cases, and jump to the case label and
 * execute the corresponding statement in each case.
 * At the end of each case,
 * there is a break statement to exit the switch block.
 * If letter does not match any of the cases, will 
 * jump to the default label.
 * 
 */

#include <iostream>
using std::cout, std::cin;

int main () {
    char letter; cin >> letter;
    switch ( letter ) {
        case 'A':
            cout << "A is for apple\n";  // <-- executed when letter == 'A'
            break; 
        case 'B':
            cout << "B is for banana\n"; // <-- executed when letter == 'B'
            break;
        case 'C' :
            cout << "C is for cherry\n"; // <-- executed when letter == 'C'
            break;
        default : // <-- all other values of letter
            cout << "No fruit for you\n";
            break;
    }
}