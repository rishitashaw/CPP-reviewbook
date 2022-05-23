#include <bits/stdc++.h>

using namespace std;

int strstr1(string s, string x)
{
    // Your code here
    int n = s.length();
    int m = x.length();

    int i = 0;
    int j = 0;

    string temp = "";
    while (temp.length() != m)
    {
        temp.push_back(s[i]);
        i++;
    }
}

int main()
{
    cout << strstr1("GeeksForGeeks", "For");
}