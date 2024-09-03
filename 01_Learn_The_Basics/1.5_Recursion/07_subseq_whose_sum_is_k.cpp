#include <bits/stdc++.h>
using namespace std;

void printSubseqSumK(int ind, vector<int> &ds, int sum, int k, int arr[], int n)
{
    if (ind == n)
    {
        if (sum == k)
        {
            for (auto it : ds)
            {
                cout << it << " ";
            }
            cout << "\n";
        }
        return;
    }
    // take
    ds.emplace_back(arr[ind]);
    sum += arr[ind];
    printSubseqSumK(ind + 1, ds, sum, k, arr, n);

    ds.pop_back();
    sum -= arr[ind];
    // not take
    printSubseqSumK(ind + 1, ds, sum, k, arr, n);
}

int main()
{
    int arr[] = {1, 2, 11, 23, 34, 45, 51};
    vector<int> ds;
    int k = 34;
    int n = int(sizeof(arr) / sizeof(arr[0]));
    printSubseqSumK(0, ds, 0, k, arr, n);
    cout << stoi("0042") << endl;
    // cout << typeid(stoi("42")).name() << endl;
    // cout << atoi("A") << endl;
    return 0;
}