#include <bits/stdc++.h>

using namespace std;

void permute(string a, int l, int r)
{
    if (l == r)
        cout << a << endl;

    else
    {
        for (int i = l; i <= r; i++)
        {
            swap(a[l], a[i]);
            permute(a, l + 1, r);
            swap(a[i], a[l]);
        }
    }
}

int main()
{
    string a = "abc";
    permute(a, 0, a.size() - 1);
}