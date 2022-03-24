#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> res;
    for (int i = 0; i < n; i++)
    {
        int num;
        cin >> num;
		if(num>=1 and num<=10){
        res.push_back(num);

		}
    }
    sort(res.begin(), res.end());
    cout << res[1] << endl;
}