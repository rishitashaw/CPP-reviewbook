#include <bits/stdc++.h>

using namespace std;

vector<int> partitionLabels(string s)
{
    unordered_map<char, int> labels;
    vector<int> ans;
    int temp1 = -1, temp2 = 0;
    for (int i = 0; i < s.length(); i++)
    {
        labels[s[i]] = i;
    }
    for (int i = 0; i < s.length(); i++)
    {
        if (labels[s[i]] > temp2)
        {
            temp2 = labels[s[i]];
        }
        if (i == temp2)
        {
            ans.push_back(temp2 - temp1);
            temp1 = temp2;
        }
    }
    return ans;
}

int main()
{
    string str = "ababcbacadefegdehijhklij";
    vector<int> result = partitionLabels(str);
    for (auto i : result)
    {
        cout << i << " ";
    }
}