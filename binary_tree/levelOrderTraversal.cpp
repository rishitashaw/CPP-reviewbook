#include <bits/stdc++.h>

using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

Node *buildTree()
{
    int d;
    vector<int> v{1, 2, 4, -1, -1, 5, 7, -1, -1, -1, 3, -1, 6, -1, -1};
    for (auto s : v)
    {
        d = s;
        if (d == -1)
            return NULL;

        Node *n = new Node(d);
        n->left = buildTree();
        n->right = buildTree();
        return n;
    }
}

int main()
{
}