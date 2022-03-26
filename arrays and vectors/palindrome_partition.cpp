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

vector<vector<string>> partition(string s)
{
    vector<vector<string>> result;
    vector<string> res;
    string palindromString = "";
    for (int i = 0; i < s.length(); i++)
    {
        palindromString.push_back(s[i]);
        if (isPalindrom(palindromString))
        {
            string rest = s.substr(i + 1, s.size());

            auto temp = partition(rest);
            if (temp.size() == 0)
            {
                res.push_back({palindromString});
            }

            for (auto &part : temp)
            {
                part.push_back(palindromString);
                result.push_back(part);
            }
        }
    }
    return result;
}
int main()
{
    string s = "aab";
    vector<vector<string>> result = partition(s);
    for (auto i : result)
    {
        for (auto j : i)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}