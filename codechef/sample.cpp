#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n % 2)
    {
        cout << -1 << endl;
    }

    cout << 0 << " " << (n / 2) << endl;
    cout << (n / 2) << " " << n + (n / 2) << endl;
    cout << n + (n / 2) << " " << n << endl;
    cout << n << " " << 0 << endl;
}