#include <bits/stdc++.h>
using namespace std;

int main()
{
    // int n;
    // cout << "Enter the size of array: ";
    // cin >> n;
    // int arr[n];
    // map<int, int> mp;
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    //     mp[arr[i]]++;
    // }
    // int q;
    // cout << "Enter how many queries you want: ";
    // cin>>q;
    // while (q--)
    // {
    //     int number;
    //     cin >> number;
    //     cout << mp[number] << endl;
    // }
    // for (auto it : mp)
    // {
    //     cout << it.first << " " << it.second << endl;
    // }

    // String Hashing
    map<char, int> cmp;
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    for (char ch : str)
    {
        cmp[ch]++;
    }
    for (pair<char, int> it : cmp)
    {
        cout << it.first << " " << it.second << endl;
    }
    return 0;
}