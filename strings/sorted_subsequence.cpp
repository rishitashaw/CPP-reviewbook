#include <bits/stdc++.h>

using namespace std;

void subsequence(string s, string o, vector<string> &v)
{
    if (s.size() == 0)
    {
        v.push_back(0);
        return;
    }

    char c = s[0];
    string reduced_string = s.substr(1);
    subsequence(reduced_string, o + c, v);
    subsequence(reduced_string, o, v);
}

bool compare(string s1, string s2)
{
    if (s1.length() == s2.length())
    {
        return s1 < s2;
    }
    return s1.length() < s2.length();
}

int main()
{
    string s;
    cin >> s;

    vector<string> v;

    string output = "";

    subsequence(s, output, v);

    sort(v.begin(), v.end(), compare);

    for (auto s : v)
    {
        cout << s << ",";
    }
}