#include <bits/stdc++.h>
using namespace std;

int maxConsOnes(vector<int> &arr)
{
    int count = 0, maxVal = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
        else
        {
            if (count > maxVal)
                maxVal = count;
            count = 0;
        }
    }
    if (count > maxVal)
        maxVal = count;
    return maxVal;
}

int main()
{
    vector<int> arr = {1, 1, 0, 1, 1, 1, 0, 1, 1, 1, 1, 0, 1, 1, 1, 1, 1, 0};
    int num = maxConsOnes(arr);
    cout << num << endl;
    return 0;
}