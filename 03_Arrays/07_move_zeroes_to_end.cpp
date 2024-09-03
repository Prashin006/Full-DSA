#include <bits/stdc++.h>
using namespace std;

void moveZeroesBrute(vector<int> &nums)
{
    vector<int> temp;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
            temp.emplace_back(nums[i]);
    }
    int non_zero = temp.size();
    for (int i = 0; i < non_zero; i++)
    {
        nums[i] = temp[i];
    }
    for (int i = non_zero; i < nums.size(); i++)
    {
        nums[i] = 0;
    }
}

void moveZeroesOptimal(vector<int>& nums){
    int j = -1; // points to zero element
    for(int ind = 0;ind < nums.size();ind++){
        if(nums[ind] == 0){
            j = ind;
            break;
        }
    }
    if(j == -1)
        return;
    for(int i = j + 1;i < nums.size();i++){
        if(nums[i] != 0){
            swap(nums[i], nums[j]);
            j++;
        }
    }
}

int main()
{
    vector<int> arr = {1, 0, 2, 3, 2, 0, 0, 4, 5, 1};
    moveZeroesOptimal(arr);
    for (int num : arr)
    {
        cout << num << " ";
    }
    return 0;
}