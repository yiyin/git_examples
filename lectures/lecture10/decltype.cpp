/*
 * Program: Illustrates how to use decltype for variable declaration
 * Author: Yiyin Zhou
 * Date: 2024/09/28
 *
 * Description:
 * This program declares and initalizes two variables x and y.
 * Then you are asked to declare a varialbe result_x as the
 * same type as x, and a variable result_y as the same type as y.
 * 
 */

int main() {
  int x = 42;
  double y = 3.14;

  // Declare a variable with the same type as x
  ___________ result_x = x;

  // Declare a variable with the same type as y
  ___________ result_y = y;

  std::cout << "result_x = " << result_x << std::endl;
  std::cout << "result_y = " << result_y << std::endl;

  return 0;
}
