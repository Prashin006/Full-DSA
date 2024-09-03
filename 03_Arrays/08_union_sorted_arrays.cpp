#include <bits/stdc++.h>
using namespace std;

vector<int> unionBrute(vector<int> &arr1, vector<int> &arr2)
{
    set<int> st;
    for (int i = 0; i < arr1.size(); i++)
    {
        st.insert(arr1[i]);
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        st.insert(arr2[i]);
    }
    vector<int> unionArr;
    for (int num : st)
    {
        unionArr.push_back(num);
    }
    return unionArr;
}

vector<int> unionOptimal(vector<int> &arr1, vector<int> &arr2)
{
    int n1 = arr1.size(), n2 = arr2.size(), i = 0, j = 0;
    vector<int> temp;
    while (i < n1 && j < n2)
    {
        if (arr1[i] <= arr2[j])
        {
            if (temp.size() == 0 || temp.back() != arr1[i])
            {
                temp.emplace_back(arr1[i]);
            }
            i++;
        }
        else
        {
            if (temp.size() == 0 || temp.back() != arr2[j])
            {
                temp.emplace_back(arr2[j]);
            }
            j++;
        }
    }
    while (i < n1)
    {
        if (temp.size() == 0 || temp.back() != arr1[i])
        {
            temp.emplace_back(arr1[i]);
        }
        i++;
    }
    while (j < n2)
    {
        if (temp.size() == 0 || temp.back() != arr2[j])
        {
            temp.emplace_back(arr2[j]);
        }
        j++;
    }
    return temp;
}

int main()
{
    vector<int> arr1 = {1, 2, 2, 3, 4, 5, 7};
    vector<int> arr2 = {1, 1, 2, 3, 3, 4, 5, 6, 6};
    vector<int> unionArr = unionOptimal(arr1, arr2);
    for (int num : unionArr)
    {
        cout << num << " ";
    }
    return 0;
}