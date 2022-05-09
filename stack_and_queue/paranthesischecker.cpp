#include <bits/stdc++.h>

using namespace std;

bool ispar(string x)
{
    // Your code here
    stack<char> s;

    for (auto c : x)
    {
        switch (c)
        {
        case '(':
        case '{':
        case '[':
            s.push(c);
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
    if (s.size() == 0)
        return true;
    return false;
}
int main()
{
    string x = "({[()]})";
    cout << ispar(x) << endl;
}