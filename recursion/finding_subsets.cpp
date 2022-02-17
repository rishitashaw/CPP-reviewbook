#include <bits/stdc++.h>

using namespace std;

void printSubsequence(string input, string output)
{
    if (input.empty())
    {
        cout << output << " ";
        return;
    }

    printSubsequence(input.substr(1), output + input[0]);
    printSubsequence(input.substr(1), output);
}

int main()
{
    string input = "abc";
    string output = "";
    printSubsequence(input, output);
}