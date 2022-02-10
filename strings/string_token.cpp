#include <bits/stdc++.h>

using namespace std;

int main()
{
    string str;
    getline(cin, str);

    stringstream ss(str);

    string token;
    vector<string> tokens;

    while (getline(cin, token, ' '))
    {
        tokens.push_back(token);
    }

    for (auto token : tokens)
    {
        cout << token << endl;
    }
}