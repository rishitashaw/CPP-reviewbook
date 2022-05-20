#include <bits/stdc++.h>

using namespace std;

bool isSubset(string s1, string s2)
{
    int n1 = s1.length();
    int n2 = s2.length();

    while (n1 >= 0 and n2 >= 0)
    {
        if (s1[n1] == s2[n2])
        {
            n1--;
            n2--;
        }
        else
        {
            n1--;
        }
    }
    if (n2 == -1)
        return true;
    return false;
}

int main()
{
    cout << isSubset("geeksforgeeks", "gfg") << endl;
}