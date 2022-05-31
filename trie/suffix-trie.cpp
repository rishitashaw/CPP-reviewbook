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

class SuffixTrie
{
    Node *root;

public:
    SuffixTrie()
    {
        root = new Node('\0');
    }

    void insert_helper(string word)
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

    void insert(string word)
    {
        for (int i = 0; word[i] != '\0'; i++)
        {
            insert_helper(word.substr(i));
        }
    }
};

int main()
{
    string input = "hello";

    string suffix[] = {"ello", "lo"};
    SuffixTrie t;
    t.insert(input);
    for (int i = 0; i < input.size(); i++)
    {
        if (t.search(suffix[i]))
        {
            cout << "Found query" << endl;
        }
        else
        {
            cout << "No query found" << endl;
        }
    }
}