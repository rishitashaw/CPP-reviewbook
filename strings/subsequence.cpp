#include <bits/stdc++.h>

using namespace std;

bool compare(string s1, string s2)
{
    if (s1.length() == s2.length())
        return s1 < s2;
    return s1.length() < s2.length();
}

void subsequence(string s, string o, vector<string> &v)
{
    if (s.size() == 0)
    {
        v.push_back(o);
        return;
    }
    char ch = s[0];
    string reduced_string = s.substr(1);
    subsequence(reduced_string, o + ch, v);
    subsequence(reduced_string, o, v);
}

int main()
{
    string s = "hello";
    vector<string> v;
    string output = "";
    subsequence(v.begin(), v.end(), compare);
    for (auto s : v)
    {
        cout << s << endl;
    }
}