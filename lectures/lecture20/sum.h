/*
 * Program: Illustrate how to write a simple header file.
 * Author: Yiyin Zhou
 * Date: 2024/11/10
 *
 * Description: 
 * This file declares functions that will be defined
 * separately in sum.cpp and used in main.cpp.
 * Since this header file may be included in multiple
 * files, it is necessary to put an "include guard"
 * so that preprocessor does not include the file
 * twice.
 *  
 */

// include guard to prevent double inclusion
#ifndef SUM_H  
// defines a constant SUM_H
#define SUM_H 

// function declaration
int sum(int a, int b); 
// int plus(int a, int b);

//  end of the #ifndef block
#endif /* SUM_H */ 
