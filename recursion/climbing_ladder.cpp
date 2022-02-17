#include <bits/stdc++.h>

using namespace std;

int count_ways(int n)
{
    if (n < 0)
    {
        return 0;
    }

    if (n == 0)
    {
        return 1;
    }

    return count_ways(n - 1) + count_ways(n - 2) + count_ways(n - 3);
}

int main()
{
    int n = 4;
    int result = count_ways(n);
    cout << result << endl;
}