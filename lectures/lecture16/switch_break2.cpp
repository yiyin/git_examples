/*
 * Program: Illustrate intentionally omitted break in switch case to realize a logic
 * Author: Yiyin Zhou
 * Date: 2024/10/26
 *
 * Description: In this program the response to both upper
 * and lower cases of letter 'A'/'a' is the same. 
 * We can just omit a break in the case 'A' and let it fall
 * through case 'a' and execute the output statement.
 * Then break will end the switch statement.
 * 
 */

#include <iostream>
using std::cout, std::cin;

int main(){
    char letter; cin >> letter;
    switch ( letter ) {
        case 'A':
        case 'a':
            cout << "A is for apple\n";  // <--executed when letter == 'A'
            break;
        case 'B':
        case 'b':
            cout << "B is for banana\n"; // <--executed when letter is 'A' or 'B'
            break;
        case 'C':
        case 'c':
            cout << "C is for cherry\n"; // <--executed when letter is 'A','B','C'
            break;
        default : // <-- all characters
            cout << "No fruit for you\n";
            break;
    }
}