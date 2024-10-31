/*
 * Program: Illustrate how to generate a random integer
 * Author: Yiyin Zhou
 * Date: 2024/10/30
 *
 * Description: 
 * The code generates a random integer and assign
 * it to the int variable random_integer.
 * We will leave the details to a later lecture.
 * 
 */


#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    std::srand(std::time(nullptr));
    // Generate a random integer between 1 and 100 inclusive
    int random_integer = 1 + std::rand() % 100;
    std::cout << "Random integer: " << random_integer << std::endl;
    return 0;
}
