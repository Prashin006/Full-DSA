#include <bits/stdc++.h>
using namespace std;
bool checkPalindrome(int i, string str)
{
    if (i >= str.length() / 2)
        return true;
    if (str[i] != str[str.length() - i - 1])
        return false;
    return checkPalindrome(i + 1, str);
}
int main()
{
    // string str;
    // cout << "Enter the string you want to check: ";
    // cin >> str;
    // bool pal = checkPalindrome(0, str);
    // if (pal)
    //     cout << "Given string is palindrome" << endl;
    // else
    //     cout << "Given string is not palindrome" << endl;
    string str = "@!Geek-for-Geeks*123";
    for (int i = 0; i < str.length(); i++)
    {
        int check = int(str[i]);
        if ((check >= 65 && check <= 90) || (check >= 97 && check <= 122) || (check >= 48 && check <= 57))
            continue;
        else
            str.erase(i,1);
    }
    cout << str << endl;
    return 0;
}