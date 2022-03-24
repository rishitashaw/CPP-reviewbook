#include <bits/stdc++.h>
using namespace std;

bool isPalindrom(string s)
{
    if (s == string(s.rbegin(), s.rend()))
    {
        return true;
    }
    else
    {
        return false;
    }
}

string longestPalindrome(string s)
{
    int i = 0;
    int n = s.length();
    int j = n - 1;
    for (int k = 0; k < n; k++)
    {
        if (isPalindrom(s))
        {
            return s;
        }
        else
        {
            if (s[i])
        }
    }
    if (s == "" || s.length() < 1)
        return "";
}

int main()
{
    cout << longestPalindrome("abab") << endl;
}