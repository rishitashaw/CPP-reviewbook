#include <bits/stdc++.h>

using namespace std;

char nonrepeatingCharacter(string S)
{
    // Your code here
    unordered_map<char, int> mp;
    int n = S.length();
    for (int i = 0; i < n; i++)
    {
        mp[S[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (mp[S[i]] > 1)
        {
            return S[i];
        }
    }
    return '$';
}
int main()
{
}