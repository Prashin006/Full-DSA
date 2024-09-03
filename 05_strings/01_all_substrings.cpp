#include <bits/stdc++.h>
using namespace std;

void generateSubstrs(string str, vector<string> &v)
{
    string substr;
    for (int i = 0; i < str.size(); i++)
    {
        for (int j = i + 1; j <= str.size(); j++)
        {
            substr = str.substr(i, j);
            v.emplace_back(substr);
        }
    }
}

int main()
{
    string input = "abcd";
    vector<string> substrs;
    generateSubstrs(input, substrs);
    for (string str : substrs)
    {
        cout << str << endl;
    }
    return 0;
}