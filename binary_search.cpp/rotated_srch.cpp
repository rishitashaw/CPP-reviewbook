#include <bits/stdc++.h>

using namespace std;

int rotated_search(vector<int> a, int key)
{
    int s = 0;
    int e = a.size() - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        while (s <= e)
        {
            if (a[mid] == key)
            {
                return mid;
            }
            else if (a[s] <= a[mid])
            {
                if (key >= a[s] and key <= a[mid])
                {
                    e = mid - 1;
                }
                else
                {
                    s = mid + 1;
                }
            }
            else
            {
                if (key >= a[mid] and key <= a[e])
                {
                    s = mid + 1;
                }
                else
                {
                    e = mid - 1;
                }
            }
        }
        return -1;
    }
}

int main()
{
    vector<int> a{7, 9, 10, 1, 2, 3, 4, 5, 6};
    cout << rotated_search(a, 4) << endl;
}