#include <bits/stdc++.h>

using namespace std;

void generatingBrackets(string output, int n, int open, int close, int i)
{
    if (i == 2 * n)
    {
        cout << output << endl;
        return;
    }

    // opening bracket
    if (open < n)
    {
        generatingBrackets(output + "(", n, open + 1, close, i + 1);
    }
    // closing bracket
    if (close < open)
    {
        generatingBrackets(output + ")", n, open, close + 1, i + 1);
    }
}

int main()
{
    string output;
    int n = 2;
    generatingBrackets(output, n, 0, 0, 0);
}