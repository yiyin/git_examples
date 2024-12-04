/*
 * Program: Illustrate how to use partially-filled arrays
 * Author: Yiyin Zhou
 * Date: 2024/12/04
 *
 * Description: 
 * This program shows how to use a partially filled array.
 * The array is declared to have MAX_NUMBER_SCORES entries,
 * but it is not necesssary to fill all the entries of it.
 * 
 * The fillArray function will ask users for a maximum
 * of `size` inputs to fill in the entries of
 * the array `arr`. User can enter a negative number to indicate
 * the end of the input. Therefore, the user may enter 3 entries,
 * or 5 entries, or all entries. 
 * 
 * The computeAverage function will calculate the average
 * of all the valid entries in the `arr`. 
 * 
 * The showDifference function will print out the different between
 * each valid entry and the average of all the entries.
 * 
 */


#include <iostream>
const int MAX_NUMBER_SCORES = 10;

// Precondition: size is the declared size of the array `arr`.
// Postcondition: numberUsed is the number of values stored in `arr`.
// arr[0] through arr[numberUsed - 1] have been filled with
// nonnegative integers read from the keyboard.
void fillArray(int arr[], int size, int& numberUsed);

//Precondition: a[0] through a[numberUsed - 1] have values; numberUsed > 0
//Returns the average of numbers a[0] through a[numberUsed - 1].
double computeAverage(const int arr[], int numberUsed);

//Precondition: The first `numberUsed` indexed entries of `arr` have values.
//Postcondition: Gives screeen output showing how much each of the first
//numberUsed elements of `arr` differs from their average.
void showDifference(const int arr[], int numberUsed);

int main()
{
  using std::cout;
  int score[MAX_NUMBER_SCORES], numberUsed;

  cout << "This program reads golf scores and shows\n"
       << "how much each differs from the average.\n";

  cout << "Enter golf scores:\n";
  fillArray(score, MAX_NUMBER_SCORES, numberUsed);
  showDifference(score, numberUsed);

  return 0;
}


void fillArray(int arr[], int size, int& numberUsed)
{
  using std::cout, std::cin;

  cout << "Enter up to " << size << " nonnegatie whole numbers.\n"
       << "Mark the end of the list with a negative number.\n";
  int next, index = 0;
  cin >> next;

  // we use index to track the number of valid entries entered
  // by the user.
  while ((next >=0) && (index < size))
  {
    arr[index] = next;
    index++;
    cin >> next;
  }
  numberUsed = index;
}


double computeAverage(const int arr[], int numberUsed)
{
  // do a running sum;
  double total = 0;
  for(int index = 0; index < numberUsed; index++)
  {
    total += arr[index];
  }

  if(numberUsed > 0)
  {
    return (total/numberUsed);
  }else{
    std::cout << "ERROR: number of elements is 0 in computeAverage.\n"
              << "computeAverage returns 0.\n";
    return 0;
  }
}

void showDifference(const int arr[], int numberUsed)
{
  using std::cout, std::endl;
  double average = computeAverage(arr, numberUsed);
  cout << "Average of the " << numberUsed
       << " scores = " << average << endl
       << "The scores are:\n";
  
  for(int index = 0; index < numberUsed; index++)
  {
    cout << arr[index] << " differes from average by "
         << (arr[index] - average) << endl;
  }
}

