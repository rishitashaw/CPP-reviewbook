#include <bits/stdc++.h>

using namespace std;

int largest_band(vector<int> arr)
{
    unordered_set<int> s;
    int largest_band = 0;

    for (auto element : arr)
    {
        s.insert(element);
    }

    for (auto element : arr)
    {
        int parent = element - 1;
        if (s.find(parent) == s.end())
        {
            int next_no = element + 1;
            int count = 1;
            while (s.find(next_no) != s.end())
            {
                next_no++;
                count++;
            }
            if (count > largest_band)
            {
                largest_band = count;
            }
        }
    }
    return largest_band;
}

int main()
{
    vector<int> arr{1, 9, 3, 0, 18, 5, 2, 4, 10, 7, 12, 6};
    int result = largest_band(arr);

    cout << result << endl;
}