#include <bits/stdc++.h>
using namespace std;

int f(int arr[], int low, int high)
{
    int pivot = arr[low];
    int i = low, j = high;
    while (i < j)
    {
        while (arr[i] <= pivot && i <= high)
        {
            i++;
        }
        while (arr[j] > pivot && j >= low)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[j], arr[low]);
    return j;
}

void quickSort(int arr[], int low, int high)
{
    if (low < high)
    {
        int pIndex = f(arr, low, high);
        quickSort(arr, low, pIndex - 1);
        quickSort(arr, pIndex + 1, high);
    }
}

int main()
{
    int arr[] = {14, -96, 2, 59, 7, -9, 1008, 311};
    quickSort(arr, 0, sizeof(arr) / sizeof(arr[0]) - 1);
    for (int it : arr)
    {
        cout << it << " ";
    }
    return 0;
}