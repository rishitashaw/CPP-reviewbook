#include <bits/stdc++.h>
using namespace std;

vector<int> stringSearchAll(string para, string word)
{
    vector<int> result;

    int index = para.find(word);
    while (index != -1)
    {
        result.push_back(index);
        index = para.find(word, index + 1);
    }

    return result;
}

int main()
{
    string para = "Hello World Hello World Hello World";
    string word = "Hello";
    vector<int> result = stringSearchAll(para, word);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}