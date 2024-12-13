/*
 * Program: Illustrate how to implement simple sort
 * Author: Yiyin Zhou
 * Date: 2024/12/04
 *
 * Description: 
 * This program provides one implementation of a simple
 * sort algorithm.
 * The advantage of this algorithm is that logic-wise
 * it is quite simple. You always find the minimium
 * value of the array, and 
 * 
 * 1. it is done in-place, you only need an extra
 *    variable to during swap.
 * 2. the logic is quite simple and only involves
 *    comparison between neighbors.
 * The only things that you need to take care of is
 * the nested for loop. Think about what is the goal
 * for the outer loop and what items you need to loop
 * over in the inner loop.
 * 
 * In addition, it is helpful to define the swap
 * function, so the swap logic can be isolated.
 * What you need to do inside the nested for loop is
 * then quite simple.
 * 
 */

#include <iostream>
#include <climits>

const int MAX_ARRAY_SIZE = 100;

void fillArray(int a[], int size, int& numberUsed);
void sort(int a[], int numberUsed);
void printArray(int a[], int numberUsed);

int main()
{
  int arr[MAX_ARRAY_SIZE], numberUsed;
  fillArray(arr, MAX_ARRAY_SIZE, numberUsed);
  sort(arr, numberUsed);
  printArray(arr, numberUsed);
}

void sort(int a[], int numberUsed)
{
  int b[MAX_ARRAY_SIZE];
  int index;
  for(int i = 0; i < numberUsed; i++)
  {
    int minimum = INT_MAX;
    for (int j = 0; j < numberUsed; j++)
    {
      if(a[j] < 0)
        continue;
      
      if(a[j] < minimum)
      {
        minimum = a[j];
        index = j;
      }
    }
    a[index] = -1;
    b[i] = minimum;
  }

  for(int i = 0; i < numberUsed; i++)
  {
    a[i] = b[i];
  }
}


void fillArray(int a[], int size, int& numberUsed)
{
  using std::cout, std::cin;

  cout << "Enter up to " << size << " nonnegatie whole numbers.\n"
       << "Mark the end of the list with a negative number.\n";
  int next, index = 0;
  cin >> next;
  while ((next >=0) && (index < size))
  {
    a[index] = next;
    index++;
    cin >> next;
  }
  numberUsed = index;
}


void printArray(int a[], int numberUsed)
{
  for(int i = 0; i < numberUsed; i++)
  {
    std::cout << a[i] << " ";
  }
  std::cout << std::endl;
}

