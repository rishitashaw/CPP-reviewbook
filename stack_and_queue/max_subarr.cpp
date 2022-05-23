#include <bits/stdc++.h>

using namespace std;

void maxSubarray(vector<int> a, int k)
{
    deque<int> Q(k);
    for (int i = 0; i < k; i++)
    {
        while (!Q.empty() and a[i] > a[Q.back()])
        {
            Q.pop_back();
        }
        Q.push_back(i);
    }
    for (int i = 0; i < k; i++)
    {
        cout << a[Q.front()] << " ";
        while (!Q.empty() and Q.front() <= i - k)
        {
            Q.pop_front();
        }
        while (!Q.empty() and a[i] >= a[Q.back()])
        {
            Q.pop_back();
        }
        Q.push_back(i);
    }
}

int main()
{
    vector<int> a{1, 2, 3, 1, 4, 5, 2, 3, 6};
    maxSubarray(a, 3);
    for (auto i : a)
    {
        cout << i << " ";
    }
}