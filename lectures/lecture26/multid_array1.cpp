/*
 * Program: Illustrate the order of looping over 2d array
 * Author: Yiyin Zhou
 * Date: 2024/12/04
 *
 * Description: 
 * This program declares and initialize a 2x3 2d array.
 * To loop over the array, we use a nested loop, where
 * the inner loop counter j is used for the right-most index
 * and outer loop counter i is used for the left-most index.
 * Run the code and inspect the order of the values printed
 * out.
 * 
 */

#include <iostream>

int main()
{
    int matrix[2][3] = { 
        {1, 2, 3},
        {4, 5, 6}
    };

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3: j++) {
            std::cout << matrix[i][j] << std::endl; 
        }
    }
    return 0;
}