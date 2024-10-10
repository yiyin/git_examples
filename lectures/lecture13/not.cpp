/*
 * Program: Example of using ! (NOT) operator
 * Author: Yiyin Zhou
 * Date: 2024/10/10
 *
 * Description:
 * This example illustrates the use of boolean logic with
 * the NOT operator (!).
 * We start by assigning 18 to the per hour wage.
 * 
 * Then hours_worked < 30 is checked, followed by
 * the NOT operator, therefore, the if condition is checking
 * if hours_worked is not less than 30, or equivalently
 * if hours_worked is greater than or equal to 30.
 * In that case, the wage is boosted to 20.
 * 
 */


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
