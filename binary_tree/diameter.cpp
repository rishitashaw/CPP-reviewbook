
#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *left = NULL;
    node *right = NULL;

    node(int d)
    {
        data = d;
        left = NULL;
        right = NULL;
    }
};

node *buildTree()
{
    int d;
    cin >> d;

    if (d == -1)
    {
        return NULL;
    }
    node *n = new node(d);
    n->left = buildTree();
    n->right = buildTree();

    return n;
}

int height(node *root)
{
    if (root == NULL)
        return 0;

    int h1 = height(root->left);
    int h2 = height(root->right);
    return 1 + max(h1, h2);
}

int distance(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int d1 = height(root->left) + height(root->right);
    int d2 = height(root->left);
    int d3 = height(root->right);
    return (max(d1, max(d2, d3)));
}

int main()
{
    node *root = buildTree();
    cout << distance(root) << endl;
    return 0;
}