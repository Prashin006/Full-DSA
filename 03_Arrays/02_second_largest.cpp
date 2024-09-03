// OPTIMAL
#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int> &arr, int n)
{
    int largest = arr[0], secondL = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            secondL = largest;
            largest = arr[i];
        }
        else if (arr[i] > secondL && arr[i] != largest)
        {
            secondL = arr[i];
        }
    }
    return secondL;
}

int main()
{
    vector<int> arr = {1, 2, 4, 7, 7, 5};
    int secondL = secondLargest(arr, arr.size());
    cout << secondL << endl;
    return 0;
}