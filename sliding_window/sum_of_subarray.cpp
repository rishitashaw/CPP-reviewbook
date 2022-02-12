#include <bits/stdc++.h>

using namespace std;

int subarraySum(vector<int> &nums, int k)
{
    int i = 0;
    int j = 0;
    int cs = 0;
    int cnt = 0;
    int n = nums.size();

    while (j < n)
    {
        cs += nums[j];
        j++;

        while (cs > k and i < j)
        {
            cs = cs - nums[i];
            i++;

            if (cs == k)
            {
                cnt++;
            }
        }
    }
    return cnt;
}
int main()
{
    int k = 0;
    vector<int> arr{-1, -1, 1};

    int result = subarraySum(arr, k);
    cout << result << endl;
}