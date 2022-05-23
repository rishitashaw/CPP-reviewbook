#include <bits/stdc++.h>

using namespace std;

string numberToString(string number)
{
    unordered_map<char, string> mp;
    mp['1'] = "one";
    mp['2'] = "two";
    mp['3'] = "three";
    mp['4'] = "four";
    mp['5'] = "five";
    mp['6'] = "six";
    mp['7'] = "seven";
    mp['8'] = "eight";
    mp['9'] = "nine";

    string s = "";

    for (int i = 0; i < number.length();)
    {
        if (number[i] == number[i + 1] and number[i + 1] == number[i + 2])
        {
            s += "triple " + mp[number[i]] + " ";
            i = i + 3;
        }
        else if (number[i] == number[i + 1])
        {
            s += "double " + mp[number[i]] + " ";
            i = i + 2;
        }
        else
        {
            s += mp[number[i]] + " ";
            i++;
        }
    }
    return s;
}

int main()
{
    cout << numberToString("122345566667") << endl;
}