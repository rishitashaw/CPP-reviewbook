#include <bits/stdc++.h>
using namespace std;
vector<int> holidays{7, 8, 14, 15, 21, 22, 28, 29};

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
    {
        int n;
        cin >> n;
        vector<int> array;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            array.push_back(temp);
        }
        for (int i = 0; i < n; i++)
        {
            if (find(holidays.begin(), holidays.end(), array[i]) != holidays.end())
            {
                continue;
            }
            else
            {
                cnt++;
            }
        }
        int res = holidays.size() + cnt;
        cout << res << endl;
    }
    return 0;
}