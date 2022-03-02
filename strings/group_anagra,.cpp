#include <bits/stdc++.h>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> mp;
    for (auto s : strs)
    {
        string temp = s;
        sort(temp.begin(), temp.end());
        mp[temp].push_back(s);
    }
    vector<vector<string>> anagrams;
    for (auto it : mp)
    {
        anagrams.push_back(it.second);
    }
    return anagrams;
}