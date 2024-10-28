/*
 * Program: Illustrate the purpose of break in switch statement
 * Author: Yiyin Zhou
 * Date: 2024/10/26
 *
 * Description:
 * If we omit the break statements in the cases 'A', 'B', 'C',
 * then the code will continue execute down, ending the
 * switch statement only when it encounter break or at
 * the end of the switch block. So in this case if
 * user enters A, all 4 print-outs will be executed.
 */

#include <iostream>
using std::cout, std::cin;

int main(){
    char letter; cin >> letter;
    switch ( letter ) {
        case 'A':
            cout << "A is for apple\n";  // <--executed when letter == 'A'
        case 'B':
            cout << "B is for banana\n"; // <--executed when letter is 'A' or 'B'
        case 'C' :
            cout << "C is for cherry\n"; // <--executed when letter is 'A','B','C'
        default : // <-- all characters
            cout << "No fruit for you\n";
            break;
    }
}
