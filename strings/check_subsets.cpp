#include <bits/stdc++.h>

using namespace std;

bool isSubset(string s1, string s2)
{
    int i = s1.length();
    int j = s2.length();

    while (i >= 0 and j >= 0)
    {
        if (s1[i] == s2[j])
        {
            i--;
            j--;
        }
        else
        {
            i--;
        }
    }
    if (j == -1)
    {
        return true;
    }
    return false;
}

int main()
{
    string s1 = "rakeshraman";
    string s2 = "rakeshram";

    bool result = isSubset(s1, s2);
    cout << result << endl;
}