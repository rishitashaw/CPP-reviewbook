#include <bits/stdc++.h>

using namespace std;

string simplify_path(string path)
{
    istringstream iss(path);
    vector<string> tokens;

    string token;
    while (getline(iss, token, '/'))
    {
        if (token == "." or token == "")
        {
            continue;
        }
        tokens.push_back(token);
    }
    vector<string> stack;
    if (path[0] == '/')
    {
        stack.push_back("");
    }

    for (string token : tokens)
    {
        if (token == "..")
        {
            if (stack.size() == 0 or stack[stack.size() - 1] == "..")
            {
                stack.push_back("..");
            }
            else if (stack[stack.size() - 1] == "")
            {
                stack.pop_back();
            }
        }
        else
        {
            stack.push_back(token);
        }
    }
    ostringstream oss;

    if (stack.size() == 1 or stack.size() == 0 and stack[0] == "")
    {
        oss << "/";
    }

    int i = 0;
    for (auto token : stack)
    {
        if (i != 0)
        {
            oss << "/";
        }
        i++;
        oss << token;
    }
    return oss.str();
}
// using STL
string simplifyPath(string path)
{
    stack<string> s;
    string ans, temp;
    int n = path.size();
    stringstream X(path);

    while (getline(X, temp, '/'))
    {
        if (temp == "" || temp == ".")
            continue;
        if (temp != "..")
            s.push(temp);
        else if (!s.empty())
            s.pop();
    }
    if (s.empty())
        return "/";

    while (!s.empty())
    {
        ans = '/' + s.top() + ans;
        s.pop();
    }
    return ans;
}

int main()
{
    string path = "/home//foo/";
    string result = simplify_path(path);
    cout << result << endl;
}