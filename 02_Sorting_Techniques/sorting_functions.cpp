#include <iostream>
#include "sorting_functions.h"
using namespace std;

void swap(int arr[], int size, int i, int j)
{
  if ((i >= 0 && i < size) && (j >= 0 && j < size))
  {
    arr[i] = arr[i] + arr[j];
    arr[j] = arr[i] - arr[j];
    arr[i] = arr[i] - arr[j];
  }
  else
  {
    throw out_of_range("Indices out of bounds!");
  }
}

void printArray(int *arr, int size)
{
  for (int i = 0; i < size; i++)
  {
    cout << arr[i] << " ";
  }
  cout << "\n";
}