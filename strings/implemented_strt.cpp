#include <bits/stdc++.h>

using namespace std;

int strstr1(string s, string x)
{
    int i = s.length();
    int j = x.length();
    bool isSubset;
    while (i >= 0 and j >= 0)
    {
        if (s[i] == x[j])
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
        isSubset = true;
    }
    isSubset = false;
    if (isSubset == false)
    {
        return -1;
    }
    if (isSubset == true)
    {
        for (int i = 0; i < s.length(); i++)
        {
            for (int j = 0; j < x.length(); j++)
            {
                if (s[i] == x[j])
                {
                    return i;
                }
            }
        }
    }
}

int main()
{
    cout << strstr1("GeeksForGeeks", "For");
}