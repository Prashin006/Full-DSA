#include <bits/stdc++.h>
using namespace std;

int brute(vector<int> &arr, int k)
{
    int len = 0, n = arr.size();
    for (int i = 0; i < n; i++)
    {
        long sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += arr[j];
            if (sum == k)
                len = max(len, j - i + 1);
        }
    }
    return len;
}

// NOTE BETTER IS THE OPTIMAL SOLUTION IF ARRAY HAS BOTH + AND - ELEMENTS AND 0 ALSO
int better(vector<int> &arr, long long k)
{
    map<long long, int> preSumMap;
    long long sum = 0;
    int maxLen = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
        if (sum == k)
        {
            maxLen = max(maxLen, i + 1);
        }
        long long rem = sum - k;
        if (preSumMap.find(rem) != preSumMap.end())
        {
            int len = i - preSumMap[rem];
            maxLen = max(maxLen, len);
        }
        // if the sum already exists, do not re-update
        if (preSumMap.find(sum) == preSumMap.end())
            preSumMap[sum] = i;
    }
    return maxLen;
}

// OPTIMAL WORKS ONLY IF ARRAY HAS + ELEMENTS
int optimal(vector<int> &arr, long long k)
{
    int left = 0, right = 0, maxLen = 0, n = arr.size();
    long long sum = arr[0];
    while (left <= right && right < n)
    {
        while (sum > k)
        {
            sum -= arr[left];
            left++;
        }
        if (sum == k)
            maxLen = max(maxLen, right - left + 1);
        right++;
        if (right < n)
        {
            sum += arr[right];
        }
    }
    return maxLen;
}

int main()
{
    vector<int> arr = {1, 2, 3, 1, 1, 1, 1, 3, 3};
    int num = optimal(arr, 6);
    cout << num << endl;
    return 0;
}