#include <bits/stdc++.h>

using namespace std;

void finding_subset(string input, string output)
{
    if (input.empty())
    {
        cout << output << " ";
        return;
    }
    finding_subset(input.substr(1), output + input[0]);
    finding_subset(input.substr(1), output);
}

int main()
{
    finding_subset("abc", "");
}