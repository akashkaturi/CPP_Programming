#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void level_order(node *root)
{
    if (root = NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        node *n = q.front();
        if (n != NULL)
        {
            cout << n->data << " ";
        }
        if (n->left)
        {
            q.push(n->left);
        }
        if (n->right)
        {
            q.push(n->right);
        }
    }
}
int main()
{

    return 0;
}

/*
Input:


Output:


Explanation:

*/