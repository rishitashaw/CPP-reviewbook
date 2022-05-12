#include <bits/stdc++.h>

using namespace std;

string reverseWords(string S)
{
    // code here
    vector<string> tokens;
    stringstream check1(S);
    string intermediate;

    while (getline(check1, intermediate, '.'))
    {
        tokens.push_back(intermediate);
    }

    string str = "";
    for (int i = tokens.size(); i > 0; i--)
    {
        str.append(tokens[i]);
        str.append(".");
    }

    return str;
}

int main()
{
    cout << reverseWords("i.like.this.program.very.much");
}