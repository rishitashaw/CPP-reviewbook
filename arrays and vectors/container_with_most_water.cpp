#include <bits/stdc++.h>

using namespace std;

int maxWater(vector<int> heights)
{
    int n = heights.size();
    int water = INT_MIN;
    int i = 0;
    int j = n - 1;
    while (i < j)
    {
        water = max(water, ((j - i) * min(heights[j], heights[i])));
        if (heights[i] < heights[j])
        {
            i++;
        }
        else
        {
            j--;
        }
    }

    return water;
}

int main()
{
    vector<int> arr{1, 8, 6, 2, 5, 4, 8, 3, 7};
    cout << maxWater(arr) << endl;
}