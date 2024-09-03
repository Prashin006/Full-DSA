#include <bits/stdc++.h>
using namespace std;
int largestElement(vector<int> &arr, int n)
{
    int largest = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
            largest = arr[i];
    }
    return largest;
}
int main()
{
    vector<int> arr = {41, 53, 8, 0, -98, 102};
    int largest = largestElement(arr, arr.size());
    cout << largest << endl;
    return 0;
}