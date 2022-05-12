#include <bits/stdc++.h>

using namespace std;

int marsExploration(string s)
{
    int ans = 0;
    for (int i = 0; i < s.size(); i += 3)
    {
        if (s[i] != 'S')
            ans++;
        if (s[i + 1] != 'O')
            ans++;
        if (s[i + 2] != 'S')
            ans++;
    }

    return ans;
}

int main()
{
    cout << marsExploration("SOSSOT");
}