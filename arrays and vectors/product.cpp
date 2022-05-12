#include <bits/stdc++.h>

using namespace std;

vector<long long int> productExceptSelf(vector<long long int> &nums, int n)
{

    // code here
    vector<long long int> v;
    long long int temp;
    long long int initialProduct = 1;
    long long int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 0)
        {
            cnt++;
            if (cnt >= 2)
            {
                break;
            }
        }
    }
    long long int product = accumulate(nums.begin(), nums.end(), initialProduct, multiplies<int>());
    if (cnt >= 2)
    {
        v[n] = 0;
    }
    for (long long int i = 0; i < n; i++)
    {
        if (nums[i] != 0)
        {
            temp = product / nums[i];
            v.push_back(temp);
        }
        else
        {
            v.push_back(1);
        }
    }
    return v;
}

int main()
{
}