#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

string GetRuler(const string &kingdom)
{
    vector<char> vowel{'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    string ruler = "";
    char last_char = kingdom.back();

    if (last_char == 'y' or last_char == 'Y')
    {
        ruler = "nobody";
    }
    else if (find(vowel.begin(), vowel.end(), last_char) != vowel.end())
    {
        ruler = "Alice";
    }
    else
    {
        ruler = "Bob";
    }

    return ruler;
}

int main()
{
    int testcases;
    cin >> testcases;
    string kingdom;

    for (int t = 1; t <= testcases; ++t)
    {
        cin >> kingdom;
        cout << "Case #" << t << ": " << kingdom << " is ruled by "
             << GetRuler(kingdom) << ".\n";
    }
    return 0;
}
