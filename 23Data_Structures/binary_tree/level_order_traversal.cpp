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
void k_th_level_sum(node *root, int level_no)
{
    if (root == NULL)
    {
        cout << "-1";
        return;
    }
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    int sum = 0;
    int level = 0;
    while (!q.empty())
    {
        node *n = q.front();
        q.pop();
        if (n != NULL)
        {
            if (level == level_no)
            {
                sum += n->data;
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
        else if (!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }
    cout << sum << endl;
}
void level_order(node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())f
    {
        node *front = q.front();
        q.pop();
        if (front != NULL)
        {
            cout << front->data << " ";
            if (front->left)
                q.push(front->left);
            if (front->right)
                q.push(front->right);
        }
        else if (!q.empty())
        {
            q.push(NULL);
        }
    }
}
int main()
{
    node *root = new node(1);
    root->left = new node(2);
    root->right = new node(3);
    root->left->left = new node(4);
    root->left->right = new node(5);
    root->right->left = new node(6);
    root->right->right = new node(7);
    level_order(root);
    cout << endl;
    k_th_level_sum(root, 1);

    return 0;
}

/*
Input:


Output:


Explanation:


*/