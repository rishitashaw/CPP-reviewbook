#include <bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int ans = 0;
    int initial = 0;
    int n = nums.size();
    int j = 0;
    int k = n - 1;
    int current = 0;
    while (j < k)
    {
        ans = max(accumulate(nums.begin(), nums.end(), initial), ans);
    }
}

int main()
{
}