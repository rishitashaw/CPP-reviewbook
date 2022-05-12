#include <bits/stdc++.h>
using namespace std;

int isPalindrome(char S[])
{
    // Your code goes here
    string s(S);
    string temp = s;
    reverse(s.begin(), s.end());
    if (temp == s)
    {
        return 1;
    }
    return 0;
}

int main()
{
    char S[] = {'a', 'b', 'b', 'a'};
    cout << isPalindrome(S) << endl;
}