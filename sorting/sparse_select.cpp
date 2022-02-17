#include <bits/stdc++.h>

using namespace std;

int sparse_select(string a[], int n, string key)
{
    int s = 0;
    int e = n - 1;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        int mid_left = mid - 1;
        int mid_right = mid + 1;

        if (a[mid] == "")
        {
            while (1)
            {
                if (mid_left < s and mid_right > e)
                {
                    return -1;
                }
                else if (mid_right <= e and a[mid_right] != "")
                {
                    mid = mid_right;
                    break;
                }
                else if (mid_left >= s and a[mid_left] != "")
                {
                    mid = mid_left;
                    break;
                }
                mid_left--;
                mid_right++;
            }
        }
        else if (a[mid] == key)
        {
            return mid;
        }
        else if (a[mid] > key)
        {
            e = mid - 1;
            break;
        }
        else
        {
            s = mid + 1;
            break;
        }
        break;
    }
    return -1;
}

int main()
{
    string a[] = {"a",
                  "",
                  "",
                  "bat",
                  "",
                  "",
                  "car",
                  "cat",
                  "",
                  "",
                  "dog",
                  "e"};
    int n = 12;
    int result = sparse_select(a, n, "dog");
    cout << result << endl;
}