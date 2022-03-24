#include <bits/stdc++.h>
using namespace std;

vector<int> partitionLabels(string s)
{
    unordered_map<char, int> mp;
    vector<int> result;
    for (int i = 0; i < s.length(); i++)
    {
        mp[s[i]] = i;
    }
    int temp = -1, temp1 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (mp[s[i]] > temp1)
        {
            temp1 = mp[s[i]];
        }
        if (i == temp1)
        {
            result.push_back(temp1 - temp);
            temp = temp1;
        }
    }

    return result;
}

int main()
{
    string s = "ababcbacadefegdehijhklij";
    vector<int> result = partitionLabels(s);
    for (auto i : result)
    {
        cout << i << " ";
    }
}