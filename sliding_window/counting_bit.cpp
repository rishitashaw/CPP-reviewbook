#include <bits/stdc++.h>

using namespace std;

string convertToBinary(unsigned int num)
{
    if (num / 2 != 0)
    {
        convertToBinary(num / 2);
    }
    return to_string(num % 2);
}
vector<int> countBits(int n)
{
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        string str = convertToBinary(n);
        int num = count(str.begin(), str.end(), '1');
        ans.push_back(num);
    }
    return ans;
}

int main()
{
}