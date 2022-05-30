#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    char data;
    unordered_map<char, Node *> m;
    bool isTerminal;

    Node(char d)
    {
        data = d;
        isTerminal = false;
    }
};

class Trie
{
    Node *root;

    Trie()
    {
        root = new Node('\0');
    }

    void insert(string word)
    {
        Node *temp = root;

        for (char ch : word)
        {
            if (temp->m.count(ch) == 0)
            {
                Node *n = temp;
                temp->m[ch] = n;
            }
            temp = temp->m[ch];
        }
        temp->isTerminal = true;
    };
    bool search(string word)
    {
        Node *temp = root;

        for (char ch : word)
        {
            if (temp->m.count(ch) == 0)
            {
                return 0;
            }
            temp = temp->m[ch];
        }
        return temp->isTerminal;
    };
};

int main()
{
    string words[] = {"applet", "ape", "no", "news", "not", "never"};
    Trie t;
    for (auto w : words)
    {
        t.insert(w);
    }

    vector<string> queries = {"applet", "ape", "no", "news", "not"};

    for (int i = 0; i < queries.size(); i++)
    {
        if (t.search(queries[i]))
        {
            cout << "Found query" << endl;
        }
        else
        {
            cout << "No query found" << endl;
        }
    }
}