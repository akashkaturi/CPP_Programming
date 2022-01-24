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
void level_order(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(head);
    q.push(NULL);
    while (!q.empty())
    {

        node *ele = q.front();
        q.pop();
        if (ele != NULL)
        {
            cout << ele->data << " ";

            if (ele->left)
            {
                q.push(ele->left);
            }
            if (ele->right)
            {
                q.push(ele->right);
            }
            else if (!q.empty())
            {
                q.push(NULL);
            }
        }
    }
}
void rightView(node *&head)
{
    if (head == NULL)
    {
        return;
    }
    queue<node *> q;
    q.push(head);
    while (!q.empty())
    {
        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            node *curr = q.front();
            q.pop();
            if (i == n - 1)
            {
                cout << curr->data << " ";
            }
            if (curr->left != NULL)
            {
                q.push(curr->left);
            }
            if (curr->right != NULL)
            {
                q.push(curr->right);
            }
        }
    }
}
int main()
{
    node *head = new node(1);
    head->left = new node(2);
    head->right = new node(3);
    head->left->left = new node(4);
    head->left->right = new node(5);
    head->right->left = new node(6);
    head->right->left = new node(7);
    level_order(head);
    cout << endl;
    rightView(head);
    return 0;
}

/*
Input:


Output:


Explanation:

*/