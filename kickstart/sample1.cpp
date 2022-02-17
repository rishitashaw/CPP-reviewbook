#include <iostream>
#include <stdio>

using namespace std;

int main()
{
    int a = 1;
    int b;
    cin >> b;
    while (a <= b)
    {
        long long n, k;
        cin >> n >> k;
        long long arr[n];
        long long ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            ans += arr[i];
        }
        int b = ans % k;
        cout << "Case #" << a << ": " << b << endl;
        a++;
    }
    return 0;
}