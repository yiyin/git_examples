#include <iostream>
int main(){
  int hours_worked;
  std::cout << "Enter the number of hours you worked: ";
  std::cin >> hours_worked;
  std::cout << "You worked " << hours_worked << " hours.\n";
  
  double wage_per_hour = 18;
  if ( ! (hours_worked < 30) ) // equivalent to if (hours_worked >= 30)
    wage_per_hour = 20;
  double gross_pay = wage_per_hour * hours_worked;
  std::cout << "Total pay is $" << gross_pay << std::endl;
  return 0;
}
