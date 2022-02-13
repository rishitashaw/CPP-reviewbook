#include <bits/stdc++.h>

using namespace std;

int unquie_substring(string str)
{
    int i = 0;
    int j = 0;
    int window_len = 0;
    int max_window_len = 0;
    int start_window = -1;

    unordered_map<char, int> m;

    if (str.length() == 0)
        return 0;

    while (j < str.length())
    {
        char ch = str[j];

        if (m.count(ch) and m[ch] >= i)
        {
            i = m[ch] + 1;
            window_len = j - i;
        }
        m[ch] = j;
        window_len++;
        j++;

        if (window_len >= max_window_len)
        {
            max_window_len = window_len;
            start_window = i;
        }
    }
    string result = str.substr(start_window, max_window_len);
    return result.size();
}

int main()
{
    string str = "prateekbhaiya";

    int result = unquie_substring(str);
    cout << result << endl;
}