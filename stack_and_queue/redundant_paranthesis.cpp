#include <bits/stdc++.h>

using namespace std;

bool checkRedundanct(string str)
{
    stack<char> s;

    for (auto ch : str)
    {
        if (ch != ')')
        {
            s.push(ch);
        }
        else
        {
            bool operator_found = false;
            while (!s.empty() and s.top() != '(')
            {
                if (s.top() == '+' or s.top() == '-' or s.top() == '*' or s.top() == '/')
                {
                    operator_found = true;
                }
                s.pop();
            }
            s.pop();
            if (operator_found == false)
            {
                return true;
            }
        }
    }
    return false;
}

int main()
{
    string input = "((a+b))";
    cout << checkRedundanct(input) << endl;
}