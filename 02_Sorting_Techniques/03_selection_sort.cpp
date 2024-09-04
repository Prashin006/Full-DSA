#include <iostream>
#include "sorting_functions.h"
using namespace std;

void selectionSort(int arr[], int size)
{
  if (size == 1)
    return;
  for (int i = 0; i < size - 1; i++)
  {
    int minIdx = i;
    for (int j = i; j < size; j++)
    {
      if (arr[j] < arr[minIdx])
      {
        minIdx = j;
      }
    }
    swap(arr, size, i, minIdx);
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
  selectionSort(arr, size);
  cout << "After sorting:" << endl;
  printArray(arr, size);
  return 0;
}