#include <bits/stdc++.h>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string> &strs)
{
    unordered_map<string, vector<string>> mp;
    for (auto s : strs)
    {
        string temp = s;
        sort(s.begin(), s.end());
        mp[temp].push_back(s);
    }
    vector<vector<string>> anagrams;
    for (auto s : mp)
    {
        anagrams.push_back(s.second);
    }
    return anagrams;
}

int main()
{
    vector<string> vec{"eat", "tea", "tan", "ate", "nat", "bat"};
    vector<vector<string>> result = groupAnagrams(vec);
    for (int i = 0; i < result.size(); i++)
    {
        for (auto it : result[i])
        {
            cout << it << " ";
        }
        cout << endl;
    }
}