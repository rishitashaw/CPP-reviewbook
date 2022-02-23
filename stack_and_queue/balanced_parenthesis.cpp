#include <bits/stdc++.h>

using namespace std;

bool isBalancedParenthesis(string input)
{
    stack<char> s;
    for (auto ch : input)
    {
        switch (ch)
        {
        case '(':
        case '{':
        case '[':
            s.push(ch);
            break;

        case ')':
            if (!s.empty() and s.top() == '(')
            {
                s.pop();
            }
            else
            {
                return false;
            }
            break;

        case '}':
            if (!s.empty() and s.top() == '{')
            {
                s.pop();
            }
            else
            {
                return false;
            }
            break;

        case ']':
            if (!s.empty() and s.top() == '[')
            {
                s.pop();
            }
            else
            {
                return false;
            }
            break;

        default:
            continue;
        }
    }
    if (s.empty())
        return true;

    return false;
}

int main()
{
    string input;
    getline(cin, input);
    cout << isBalancedParenthesis(input) << endl;
}