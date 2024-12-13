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

