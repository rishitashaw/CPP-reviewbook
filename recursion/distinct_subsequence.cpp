#include <bits/stdc++.h>

using namespace std;

int printSubsequence(string input, string output)
{
    if (input.empty())
    {
        return 1;
    }

    return printSubsequence(input.substr(1), output + input[0]) + printSubsequence(input.substr(1), output);
}

int main()
{
    string input = "abc";
    string output = "";
    int result = printSubsequence(input, output);
    cout << result << endl;
}