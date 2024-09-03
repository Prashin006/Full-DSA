#include <bits/stdc++.h>
using namespace std;

void printNameNTimes(string name, int count = 5)
{
    // As we call the function N times , TC = O(n)
    // As all function calls are waiting in stack until the base condition is fulfilled, SC = O(n)
    if (count == 0)
    {
        return;
    }
    cout << name << endl;
    count--;
    printNameNTimes(name, count);
}
void printLinearly1ToN(int n, int count = 1)
{
    // TC = O(n)
    // SC = O(n)
    if (count > n)
    {
        return;
    }
    cout << count << endl;
    count++;
    printLinearly1ToN(n, count);
}
void printNTo1(int n)
{
    if (n < 1)
        return;
    cout << n << endl;
    printNTo1(n - 1);
}
void print1ToNBacktracking(int count, int n)
{
    if (count < 1)
        return;
    print1ToNBacktracking(count - 1, n);
    cout << count << endl;
}
void printNTo1Backtracking(int count, int n){
    if(count > n)
        return
    printNTo1Backtracking(count + 1,n);
    cout << count << endl;
}
int main()
{
    int n;
    cin >> n;
    // 1. Print name N times
    // printNameNTimes("Prashin", 7);

    // 2. Print Linearly from 1 to N
    // printLinearly1ToN(3);

    // 3. Print N to 1
    // printNTo1(15);

    // 4. Print 1 to N using backtracking
    // print1ToNBacktracking(n, n);

    // 5. Print N to 1 using backtracking
    printNTo1Backtracking(1,n);
    return 0;
}