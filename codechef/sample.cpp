
#include <bits/stdc++.h>
using namespace std;

bool coprime(int a, int b)
{
    return (__gcd(a, b) == 1);
}

vector<int> goodArrays(vector<int> arr)
{
    vector<int> goodArr;
    for (int i = 0; i < arr.size(); i++)
    {
        if (coprime(arr[i], arr[i + 1]))
        {
            arr[i] = arr[i] + 1;
        }
        else
        {
            goodArr.push_back(arr[i]);
        }
    }
    return goodArr;
}

int main()
{
    // your code goes here
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, num;
        vector<int> arr;
        cin >> n;
        if (n <= 2)
        {
            break;
        }

        for (int i = 0; i < n; ++i)
        {
            cin >> num;
            arr.push_back(num);
        }

        vector<int> result = goodArrays(arr);

        for (auto n : result)
        {
            cout << n << " ";
        }
        cout << endl;
    }
    return 0;
}
