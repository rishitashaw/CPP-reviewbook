#include <bits/stdc++.h>

using namespace std;

class Pair
{
public:
    int inc;
    int exc;
};

Pair maxSubsetSize(node *root)
{
    Pair pair;
    if (root == NULL)
    {
        p.inc = p.exc = 0;
        return p;
    }

    Pair Left = maxSubsetSize(root->left);
    Pair Right = maxSubsetSize(root->right);

    p.inc = root->data + Left.exc + Right.exc;
    p.exc = max(Left.inc, Left.exc) + max(Right.inc, Right.exc);
    return p;
}