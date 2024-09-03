#include <bits/stdc++.h>
using namespace std;

class Solution
{
    int merge(int arr[], int low, int mid, int high)
    {
        int count = 0;
        vector<int> temp;
        int left = low, right = mid + 1;
        while (left <= mid && right <= high)
        {
            // left is smaller
            if (arr[left] <= arr[right])
            {
                temp.emplace_back(arr[left]);
                left++;
            }
            // right is smaller
            else
            {
                count += (mid - left + 1);
                temp.emplace_back(arr[right]);
                right++;
            }
        }
        while (left <= mid)
        {
            temp.emplace_back(arr[left++]);
        }
        while (right <= high)
        {
            temp.emplace_back(arr[right++]);
        }
        for (int i = low; i <= high; i++)
        {
            arr[i] = temp.at(i - low);
        }
        return count;
    }
    int mergeSort(int arr[], int low, int high)
    {
        int count = 0;
        if (low >= high)
        {
            return count;
        }
        int mid = (low + high) / 2;
        count += mergeSort(arr, low, mid);
        count += mergeSort(arr, mid + 1, high);
        count += merge(arr, low, mid, high);
        return count;
    }

public:
    int solve(int arr[], int size)
    {
        return mergeSort(arr, 0, size - 1);
    }
};

int main()
{
    int arr[] = {5, 3, 2, 4, 1};
    Solution obj;
    int count = obj.solve(arr, sizeof(arr) / sizeof(arr[0]));
    cout << count << endl;
    return 0;
}