#include <bits/stdc++.h>
using namespace std;

int remove_duplicate(int a[], int n)
{
    // code here
    unordered_set<int> set;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (set.find(a[i]) != set.end())
        {
            set.insert(a[i]);
            cnt++;
        }
    }
    return cnt;
}

int main()
{
    int a[] = {2, 2, 2, 2, 2};
    cout << remove_duplicate(a, 5) << endl;
}