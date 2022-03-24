#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> triplets(vector<int> arr, int target)
{
    int n = arr.size();
    sort(arr.begin(), arr.end());
    vector<vector<int>> result;

    for (int i = 0; i <= n - 3; i++)
    {

        int j = i + 1;
        int k = n - 1;

        while (j < k)
        {
            int current_sum = arr[i];
            current_sum += arr[j];
            current_sum += arr[k];
            if (current_sum == target)
            {

                result.push_back({arr[i], arr[j], arr[k]});
                j++;
                k--;
            }
            else if (current_sum > target)
            {
                k--;
            }
            else
            {
                j++;
            }
        }
    }
    return result;
}

int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9, 15};

    vector<vector<int>> res = triplets(arr, 18);
    for (auto i : res)
    {
        cout << i[1] << " " << i[2] << " " << i[3] << endl;
    }
}