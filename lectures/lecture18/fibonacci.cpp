#include <iostream>
using std::cout, std::cin, std::endl;

int main(){
  int n, t1 = 0, t2 = 1, nextTerm = 0;
  
  cout << "Enter the number of terms: ";
  cin >> n;

  cout << "Fibonacci Sequence: ";
  int count = 0;

  while (count < n) {
    count++;
    if(count == 1) { // 0
      cout << t1 << ", ";
    } else if (count == 2) { // 1
      cout << t2 << ", ";
    } else { // Prints the rest of terms
      nextTerm = t1 + t2;
      t1 = t2;
      t2 = nextTerm;
      cout << nextTerm << ", ";
    }
  }

  cout << endl;
  return 0;
}