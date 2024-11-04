/*
 * Program: Illustrate how to use loop to perform sequential operation
 * Author: Yiyin Zhou
 * Date: 2024/11/02
 *
 * Description: 
 * The code prints out the first n numbers in the
 * Fibonacci sequence, where n is provided by a user.
 * Compare this program with fibonacci.cpp.
 * We here use the continue statement to end the iteration
 * immediately when count is 1 or 2.
 * Therefore, we do no need an else condition for the 
 * case when count > 2.
 */


#include <iostream>
using std::cout, std::cin, std::endl;

int main(){
    int n, t1 = 0, t2 = 1, nextTerm = 0;
    
    cout << "Enter the number of terms: ";
    cin >> n;
    
    cout << "Fibonacci Sequence: ";
    int count = 0;

    while (count++ < n) {
        if(count == 1){
            cout << t1 << ", ";  continue; 
        } 
        if (count == 2) { 
            cout << t2 << ", ";  continue;
        } 

        // only executed when count > 2
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
        cout << nextTerm << ", ";
    }

    cout << endl;
    return 0;
}