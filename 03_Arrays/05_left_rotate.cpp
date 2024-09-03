#include <bits/stdc++.h>
using namespace std;

void rotateArray(vector<int> &arr)
{
    int n = arr.size();
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    rotateArray(arr);
    rotateArray(arr);
    for(int num : arr){
        cout << num <<" ";
    }
    return 0;
}