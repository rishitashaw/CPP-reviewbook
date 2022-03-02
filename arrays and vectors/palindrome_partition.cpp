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
    vector<string> temp;
    for (int i = 0; i < s.length(); i++)
    {

        if (isPalindrom(s))
        {
            temp.push_back(s);
        }
        else
        {
            temp.push_back(s.substr(s.length() - 1));
            if (s.size() == 1)
            {
                temp.push_back({s});
                break;
            }
            s.pop_back();
        }

        sort(temp.begin(), temp.end());
        result.push_back(temp);
    }
    return result;
}

int main()
{
    string s = "aab";
}