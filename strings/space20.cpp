#include <bits/stdc++.h>
using namespace std;

void replace_space(char *string)
{
    int spaces = 0;

    for (int i = 0; string[i] != '\0'; i++)
    {
        if (string[i] == ' ')
        {
            spaces++;
        }
    }

    int index = spaces * 2 + strlen(string);

    for (int i = strlen(string) - 1; i >= 0; i--)
    {
        if (string[i] == ' ')
        {
            string[index - 1] = '0';
            string[index - 2] = '2';
            string[index - 3] = '%';
            index = index - 3;
        }
        else
        {
            string[index - 1] = string[i];
            index--;
        }
    }
}

int main()
{
    char str[] = "Mr John Smith    ";
    replace_space(str);
    cout << str;
    return 0;
}