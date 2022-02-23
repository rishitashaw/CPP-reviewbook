#include <bits/stdc++.h>

using namespace std;

bool isPalindrom(int n)
{
    string s = to_string(n);
    if (s == string(s.rbegin(), s.rend()))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n = 1000021;
    cout << isPalindrom(n) << endl;
}