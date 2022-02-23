#include <bits/stdc++.h>

using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

void printAtLevelK(node *root, int k)
{
    if (root == NULL or k < 0)
    {
        return;
    }

    if (k == 0)
    {
        cout << root->data << endl;
        return;
    }

    printAtLevelK(root->left, k - 1);
    printAtLevelK(root->right, k - 1);
}

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

int main()
{
    int t;
    while (t--)
    {
        node *root = buildTree();
        printAtLevelK(root, 3);
    }

    return 0;
}