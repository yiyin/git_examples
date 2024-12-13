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

