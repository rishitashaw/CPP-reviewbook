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

vector<vector<int>> levelOrder(node *root)
{
    vector<vector<int>> levelOrderNodes;
    if (!root)
        return levelOrderNodes;
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        int s = q.size();
        vector<int> levelNodes;
        for (int i = 0; i < s; i++)
        {
            node *n = q.front();
            if (n)
                levelNodes.push_back(n->data);
            q.pop();
            if (n->left)
                q.push(n->left);
            if (n->right)
                q.push(n->right);
        }
        levelOrderNodes.push_back(levelNodes);
    }
    return levelOrderNodes;
}
int deepestLeavesSum(node *root)
{
    vector<vector<int>> levels = levelOrder(root);
    vector<int> lastLevel = levels.back();
    return accumulate(lastLevel.begin(), lastLevel.end(), 0);
}

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