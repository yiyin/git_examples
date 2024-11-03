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