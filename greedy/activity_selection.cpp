#include <bits/stdc++.h>

using namespace std;

struct Interval
{
    int start, end;
};

bool compareInterval(Interval i1, Interval i2)
{
    return (i1.end < i2.end);
}

void printMaxActivity(vector<Interval> arr)
{
    int n = arr.size();
    sort(arr.begin(), arr.end(), compareInterval);

    int i = 0;
    cout << arr[i].start << " " << arr[i].end << endl;

    for (int j = 1; j < n; j++)
    {
        if (arr[i].end <= arr[j].start)
        {
            cout << arr[j].start << " " << arr[j].end << endl;
            i = j;
        }
    }
    return;
}

int main()
{
    vector<Interval> arr{{12, 25}, {10, 20}, {20, 30}, {30, 50}};
    printMaxActivity(arr);
}