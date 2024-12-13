/*
 * Program: Illustrate how to implement selection sort
 * Author: Yiyin Zhou
 * Date: 2024/12/04
 *
 * Description: 
 * This program provides one implementation of the
 * selection sort algorithm.
 * The basic idea is quite similar to the simple sort
 * algorithm. You need to find a minimum value.
 * However, instead of find the min across the entire
 * array, we only need to find the min from the part
 * of the array that has not yet been sorted.
 * The other difference is that the min value is not
 * written into a new array, but swapped into the ith
 * index of the array, where i is the outer loop variable. 
 * 
 * In addition, it is helpful to define the swap
 * function, so the swap logic can be isolated.
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
  int index;
  for(int i = 0; i < numberUsed-1; i++)
  {
    int minimum = INT_MAX;
    for (int j = i; j < numberUsed; j++)
    {
      if(a[j] < minimum)
      {
        minimum = a[j];
        index = j;
      }
    }
    swap(a[i], a[index]); 
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

