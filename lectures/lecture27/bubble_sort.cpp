/*
 * Program: Illustrate how to use bubble sort
 * Author: Yiyin Zhou
 * Date: 2024/12/04
 *
 * Description: 
 * This program provides one implementation of the
 * bubble sort algorithm.
 * The advantage of this algorithm is that
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
void swap(int& a, int& b);
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
  for(int i = numberUsed-1; i > 0; i--)
  {
    for(int j = 0; j < i; j++)
    {
      if(a[j] > a[j+1])
      {
        swap(a[j], a[j+1]);
      }
    }	
  }
}

void swap(int& a, int& b)
{
  int c = b;
  b = a;
  a = c;
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

