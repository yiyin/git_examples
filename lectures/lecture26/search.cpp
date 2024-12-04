/*
 * Program: Illustrate how to use partially-filled arrays
 * Author: Yiyin Zhou
 * Date: 2024/12/04
 *
 * Description: 
 * This program shows how to use a partially filled array.
 * The array is declared to have DECLARED_SIZE entries,
 * but it is not necesssary to fill all the entries of it.
 * 
 * The fillArray function will ask users for a maximum
 * of `size` inputs to fill in the entries of
 * the array `arr`. User can enter a negative number to indicate
 * the end of the input. Therefore, the user may enter 3 entries,
 * or 5 entries, or all entries. 
 * 
 * The search function will search through the partially-filled
 * array for a target value.
 */


#include <iostream>
const int DECLARED_SIZE = 20;

//Precondition: size is the declared size of the array `arr`.
//Postcondition: numberUsed is the number of values stored in `arr``.
//arr[0] through arr[numberUsed - 1] have been filled with
//nonnegative integers read from the keyboard.
void fillArray(int arr[], int size, int& numberUsed);

//Precondition: numberUsed is <= the declared size of `arr`
//Also, arr[0] through arr[numberUsed - 1] have alues.
//Returns the first index such that arr[index] == target,
//provided there is such an dindex; otherwise, returns -1.
int search(const int arr[], int numberUsed, int target);


int main()
{
  using std::cout, std::cin, std::endl;
  int arr[DECLARED_SIZE], listSize, target;
  fillArray(arr, DECLARED_SIZE, listSize);

  char ans;
  int result;
  do
  {
    cout << "Enter a number to search for: ";
    cin >> target;
    result = search(arr, listSize, target);
    if(result == -1)
    {
      cout << target << " is not on the list.\n";
    } else {
      cout << target << " is stored in array position "
	   << result << endl
	   << "(Remember: The first poistion is 0.)\n";
    }
    cout << "Search again? (y/n followed by Return): ";
    cin >> ans;
  } while ( (ans != 'n') && (ans != 'N'));

  cout << "end of program.\n";
  return 0;
}


void fillArray(int arr[], int size, int& numberUsed)
{
  using std::cout, std::cin;

  cout << "Enter up to " << size << " nonnegatie whole numbers.\n"
       << "Mark the end of the list with a negative number.\n";
  int next, index = 0;
  cin >> next;
  while ((next >=0) && (index < size))
  {
    arr[index] = next;
    index++;
    cin >> next;
  }
  numberUsed = index;
}

int search(const int arr[], int numberUsed, int target)
{
  int index = 0;
  bool found = false;

  // search each entry of the array a until a hit is found,
  // or reaches the number of entries in a.
  while ((!found) && (index < numberUsed))
  {
    if (target == arr[index])
      found = true;
    else
      index ++;
  }
  if(found)
    return index;
  else
    return -1;
}



