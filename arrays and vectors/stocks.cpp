#include <bits/stdc++.h>
using namespace std;

int maxProfit(vector<int> &prices)
{
    int n = prices.size();
    if (n <= 1)
    {
        return 0;
    }
    int j = 0;
    int k = n - 1;
    int minVal = INT_MAX;
    int maxVal = INT_MIN;
    while (j < k)
    {
        minVal = min(prices[j], minVal);
        maxVal = max(prices[k], maxVal);
        j++;
        k--;
    }
    if ((maxVal - minVal) < 0)
        return 0;
    return maxVal - minVal;
}

int main()
{
    vector<int> arr{7, 6, 4, 3, 1};
    cout << maxProfit(arr) << endl;
}