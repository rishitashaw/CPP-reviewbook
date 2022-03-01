#include <bits/stdc++.h>
using namespace std;

bool canFormEquilateralTriangle(int n)
{
    float thirdSide = sqrt(n * n);
    int x = thirdSide;
    double temp2 = thirdSide - x;
    if (temp2 > 0)
    {
        return false;
    }
    return true;
}

int main()
{

    int n = 4;
    // cin >> n;
    if (!canFormEquilateralTriangle(n))
        return -1;

    if (n % 2)
    {
        cout << -1 << endl;
    }

    cout << 0 << " " << (n / 2) << endl;
    cout << (n / 2) << " " << n << endl;
    cout << n << " " << n + (n / 2) << endl;
    cout << n + (n / 2) << " " << 2 * n << endl;

    return 0;
}