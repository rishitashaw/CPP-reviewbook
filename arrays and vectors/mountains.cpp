#include <bits/stdc++.h>

using namespace std;

int highest_mountain(vector<int> arr)
{
    int n = arr.size();
    int largest = 0;

    for (int i = 1; i < n - 2;)
    {
        if (arr[i] > arr[i - 1] and arr[i] > arr[i + 1])
        {
            int cnt = 1;
            int j = i;

            while (j >= 1 and arr[j] > arr[j - 1])
            {
                j--;
                cnt++;
            }
            while (i <= n - 2 and arr[i] > arr[i + 1])
            {
                i++;
                cnt++;
            }
            return cnt;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    vector<int> arr{0, 1, 0};
    int result = highest_mountain(arr);

    cout << result << endl;
}