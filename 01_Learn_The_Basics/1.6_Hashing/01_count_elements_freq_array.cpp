#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Counting the frequency of each element in an integer array using hashing
    /* int n, q;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // say the problem says the max element in array can be 12,ie, array elements can be 1,2...12
    int hash[1000] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    // precompute
    cin >> q;
    while (q--)
    {
        int number;
        cin >> number;
        // fetch
        cout << "The hash for " << number << " is " << hash[number] << endl;
    } */

    // Counting the frequency of each character in a character array
    int char_hash[26] = {0};
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    // processing
    for (char ch : str)
    {
        char_hash[ch - 'a'] += 1;
    }
    int q;
    cout << "Enter how many queries you want: ";
    cin >> q;
    while (q--)
    {
        char ch;
        cin >> ch;
        // fetch
        cout << "Frequency for " << ch << " in the string is " << char_hash[ch - 'a'] << endl;
    }
    // int x = 'a';
    // cout << x << endl;
    // cout << 'f' - 'a' << endl;
    return 0;
}