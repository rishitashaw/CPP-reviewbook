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
public:
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
};

void searchHelper(Trie t, string document, int i, unordered_map<string, bool> &m)
{
    Node *temp = t.root;
    for (int j = 0; j < document.length(); j++)
    {
        char ch = document[j];
    }
}

void documentSearch(string document, vector<string> words)
{
    Trie t;
    for (auto w : words)
    {
        t.insert(w);
    }

    unordered_map<string, bool> m;
    for (int i = 0; i < document.length(); i++)
    {
        searchHelper(t, document, i, m);
    }
}
int main()
{
    string input = "hello motherfucker";

    vector<string> words = {"ello", "lo"};
    Trie t;
}