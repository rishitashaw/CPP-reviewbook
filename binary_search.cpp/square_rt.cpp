#include <bits/stdc++.h>

using namespace std;

float sqrt(int N, int P)
{
    int s = 0;
    int e = N;
    int ans;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (mid * mid == N)
        {
            return mid;
        }
        else if (mid * mid < N)
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    float inc = 0.1;
    for (int i = 0; i <= P; i++)
    {
        while (ans * ans <= N)
        {
            ans += inc;
        }
        ans = ans - inc;
        inc = inc / 10.0;
    }
    return ans;
}

int main()
{
    cout << sqrt(2, 2) << endl;
}