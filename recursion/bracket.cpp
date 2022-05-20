#include <bits/stdc++.h>

using namespace std;

void printBracket(string output, int n, int open, int close, int i)
{
    if (i == n * 2)
    {
        cout << output << endl;
        return;
    }
    // opening bracket
    if (open < n)
    {
        printBracket(output + '(', n, open + 1, close, i + 1);
    }
    if (close < open)
    {
        printBracket(output + ')', n, open, close + 1, i + 1);
    }
}

int main()
{
    printBracket("", 4, 0, 0, 0);
}