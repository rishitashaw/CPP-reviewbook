#include <bits/stdc++.h>
using namespace std;

int countSub(string s)
{
    map<char, int> m;

    for (int i = 0; i < s.length(); i++)
    {
        m[s[i]] = -1;
    }

    int allCount = 0;
    int levelCount = 0;

    for (int i = 0; i < s.length(); i++)
    {
        char c = s[i];

        if (i == 0)
        {
            allCount = 1;
            m[i] = 1;
            levelCount = 1;
            continue;
        }

        levelCount = allCount + 1;

        if (m[i] < 0)
        {
            allCount = allCount + levelCount;
        }
        else
        {
            allCount = allCount +
                       levelCount - m[i];
        }
        m[i] = levelCount;
    }

    return allCount;
}

int main()
{
    string list[] = {"abab", "gfg"};

    for (string s : list)
    {
        int cnt = countSub(s);
        int withEmptyString = cnt + 1;

        cout << "With empty string count for "
             << s << " is " << withEmptyString
             << endl;
        cout << "Without empty string count for "
             << s << " is " << cnt << endl;
    }
    return 0;
}
