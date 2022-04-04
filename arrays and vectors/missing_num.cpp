#include <bits/stdc++.h>

using namespace std;

int MissingNumber(vector<int> &array, int n)
{
    // Your code goes
    int total = (n + 1) * (n + 2) / 2;
    int s = 0;
    for (int i = 0; i < n; i++)
    {
        s += array[i];
    }
    return total - s;
}
int main()
{
    vector<int> array{1, 2, 3, 5};
    cout << MissingNumber(array, 5) << endl;
}