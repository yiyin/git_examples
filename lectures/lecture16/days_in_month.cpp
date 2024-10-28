/*
 * Program: Illustrate the usage of omitting break in switch statement
 * Author: Yiyin Zhou
 * Date: 2024/10/26
 *
 * Description: For the months that has 31 days,
 * we list these cases together without any statement.
 * After 12, we pint out 31 days. So everything before
 * and including 12 will fall through to execute
 * "31 days". Then the break statement ends the switch
 * statement. Similar for 30 days.
 * 
 */


#include <iostream>
using std::cout, std::cin;

int main(){
    int month; cin >> month;
    switch (month) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            cout << "31 days\n";
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            cout << "30 days\n";
            break;
        case 2:
            cout << "28 days; 29 days in leap year\n";
            break;
        default:
            cout << "Not a valid month\n";
            break;
    }
}