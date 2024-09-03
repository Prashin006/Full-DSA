#include <bits/stdc++.h>
using namespace std;
void reverseArrLoop(int arr[], int length)
{
    int start = 0, end = length - 1;
    while (start < end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}
void reverseArrStack(int arr[], int length)
{
    stack<int> st;
    for (auto i = 0; i < length; i++)
    {
        st.push(arr[i]);
    }
    int i = 0;
    while (!st.empty())
    {
        arr[i] = st.top();
        st.pop();
        i++;
    }
}
void reverseArrRecursion(int i, int arr[], int n)
{
    if (i >= n / 2)
        return;
    swap(arr[i], arr[n - i - 1]);
    reverseArrRecursion(i + 1, arr, n);
}
int main()
{
    int n;
    cout << "Enter the length of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // reverseArrRecursion(0, arr, n);
    reverseArrStack(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}