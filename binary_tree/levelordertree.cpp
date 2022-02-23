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

node *levelOrderBuild()
{
    int d;
    cin >> d;
    node *root = new node(d);
    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node *current = q.front();
        q.pop();
        int c1, c2;
        cin >> c1 >> c2;
        if (c1 != -1)
        {
            current->left = new node(c1);
            q.push(current->left);
        }
        if (c2 != -1)
        {
            current->right = new node(c2);
            q.push(current->right);
        }
    }
    return root;
}

int main()
{
    node *root = levelOrderBuild();
    return 0;
}