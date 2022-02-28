#include <bits/stdc++.h>

using namespace std;

vector<string> summaryRanges(vector<int> nums)
{
    vector<string> ranges;
    int n = nums.size();
    if (n == 0)
        return ranges;

    int a = nums[0];
    for (int i = 1; i < n; i++)
    {
        if (i == n - 1 or nums[i] + 1 != nums[i + 1])
        {
            if (nums[i] != a)
                ranges.push_back(to_string(a) + "->" + to_string(nums[i]));
            else
                ranges.push_back(to_string(a));

            if (i != n - 1)
                a = nums[i + 1];
        }
    }
    return ranges;
}
int main()
{
    vector<int> nums{0, 2, 3, 4, 6, 8, 9};
    vector<string> ranges = summaryRanges(nums);
    for (auto &i : ranges)
    {
        cout << i << endl;
    }
}