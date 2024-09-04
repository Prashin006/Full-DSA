#include <iostream>
#include "sorting_functions.h"

using namespace std;

void bubbleSort(int arr[], int size)
{
  for (int i = size - 1; i > 0; i--)
  {
    for (int j = 0; j < i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        swap(arr, size, i, j);
      }
    }
  }
}

int main()
{
  int size;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++)
  {
    cin >> arr[i];
  }
  cout << "Before sorting:" << endl;
  printArray(arr, size);
  bubbleSort(arr, size);
  cout << "After sorting:" << endl;
  printArray(arr, size);
  return 0;
}