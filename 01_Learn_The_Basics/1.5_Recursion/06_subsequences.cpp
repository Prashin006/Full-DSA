#include <bits/stdc++.h>
using namespace std;

void printAllSubseq(int ind, vector<int> &ds, int arr[], int n)
{
    if (ind == n)
    {
        for (vector<int>::iterator it = ds.begin(); it != ds.end(); it++)
        {
            cout << *it << " ";
        }
        if (ds.size() == 0)
        {
            cout << "{}";
        }
        cout << "\n";
        return;
    }
    // take or pick the particular index into the subsequence
    ds.emplace_back(arr[ind]);
    printAllSubseq(ind + 1, ds, arr, n);
    ds.pop_back();
    // not pick or not take, this element is not added to the subsequence
    printAllSubseq(ind + 1, ds, arr, n);
}

int main()
{
    vector<int> ds;
    int arr[] = {3, 1, 2};
    printAllSubseq(0, ds, arr, int(sizeof(arr) / sizeof(arr[0])));
    return 0;
}