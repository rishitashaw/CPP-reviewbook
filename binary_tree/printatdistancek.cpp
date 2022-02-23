#include <bits/stdc++.h>

using namespace std;

void printAtLevelK(node *root, int k)
{
    if (root == NULL)
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
    return;
}

int printAtDistanceK(node *root, node *target, int k)
{
    if (root == NULL)
    {
        return -1;
    }
    if (root == target)
    {
        printAtLevelK(target, k);
        return 0;
    }
    int DL = printAtDistanceK(root->left, target, k);
    if (DL != -1)
    {
        if (DL + 1 == k)
        {
            cout << root->data;
        }
        else
        {
            printAtDistanceK(root->right, k - 2 - DL);
        }
        return 1 + DR;
    }
    int DR = printAtDistanceK(root->right, target, k);
    if (DR != -1)
    {
        if (DR + 1 == k)
        {
            cout << root->data;
        }
        else
        {
            printAtDistanceK(root->left, k - 2 - DR);
        }
        return 1 + DL;
    }
    return -1;
}