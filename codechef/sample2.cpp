#include <bits/stdc++.h>
using namespace std;

int main()
{

    // int tc;
    // cin >> tc;
    // while (tc--)
    // {
    int n = 6, k = 1;
    cin >> n, k;
    char str[n] = "whizzy";
    // cin.get(str, n);
    vector<string> v;

    for (int i = 0; i < n; i++)
    {
        string str1 = "";

        if (i % k == 0)
            v.push_back(str1);
        str1 += str[i];
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    // }

    return 0;
}
