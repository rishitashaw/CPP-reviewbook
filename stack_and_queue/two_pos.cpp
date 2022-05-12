#include <bits/stdc++.h>

using namespace std;

bool isRotated(string str1, string str2)
{
    // Your code here
    int n = str1.length();
    pair<char, int> ap[n];

    for (int i = 0; i < n; i++)
    {
        ap[i].first = str1[i];
        ap[i].second = i;
    }
    int m = str1.length();
    pair<char, int> bp[m];

    for (int i = 0; i < m; i++)
    {
        bp[i].first = str2[i];
        bp[i].second = i;
    }

    vector<bool> visited(n, false);
    int ans = 0;

    for (int i = 0; i < n; i++)
    {

        if (visited[i] == true or ap[i].second == bp[i].second)
        {
            continue;
        }
        int node = i;
        int cycle = 0;

        while (!visited[node])
        {
            visited[node] = true;
            int next_node = ap[node].second;
            node = next_node;
            cycle++;
        }
        ans += cycle - 1;
        if (ans > 2)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << isRotated("geeksforgeeks", "geeksgeeksfor");
}