#include <bits/stdc++.h>
using namespace std;

int brute(vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int num = arr[i], count = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[j] == num)
                count++;
        }
        if (count == 1)
            return num;
    }
}
int optimal(vector<int> &arr)
{
    int xor1 = 0;
    for(int num : arr){
        xor1 = xor1 ^ num;
    }
    return xor1;
}
int main()
{
    vector<int> arr = {108, 108, 2, 2, 300, 4, 4, 99, 99};
    int num = optimal(arr);
    cout << num << endl;
    return 0;
}