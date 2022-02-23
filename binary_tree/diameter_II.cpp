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

class HDPair
{
public:
    int height;
    int diameter;
};

HDPair optDiameter(node *root)
{
    HDPair p;
    if (root == NULL)
    {
        p.height = p.diameter = 0;
        return p;
    }

    HDPair left = optDiameter(root->left);
    HDPair right = optDiameter(root->right);
    p.height = max(left.height, right.height) + 1;

    int d1 = left.height + right.height;
    int d2 = left.diameter;
    int d3 = right.diameter;

    p.diameter = max(d1, max(d2, d3));
    return p;
}

int main()
{
    node *root = buildTree();
    return 0;
}