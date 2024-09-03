#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    string getPermutation(int n, int k)
    {
        long fact = 1;
        vector<int> numbers;
        // Calculating the (n - 1)!
        for (int i = 1; i < n; i++)
        {
            fact = fact * i;
            numbers.emplace_back(i);
        }
        numbers.emplace_back(n);
        // now, numbers = [1,2,3,...n]
        string ans = "";
        k = k - 1; // As we are using 0-based indexing
        while (true)
        {
            ans = ans + to_string(numbers[k / fact]);
            numbers.erase(numbers.begin() + k / fact); // deleting the number we just added to ans thereby reducing the size of numbers array
            if (numbers.size() == 0)
            {
                break;
            }
            k = k % fact;
            fact = fact / numbers.size();
        }
        return ans;
    }
};

int main()
{
    Solution obj;
    int n = 4, k = 18;
    string result;
    result = obj.getPermutation(n, k);
    cout << result << endl;
    return 0;
}