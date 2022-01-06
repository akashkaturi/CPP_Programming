#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *right;
    node *left;
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};
void pre_order(node *head)
{
    if (head == NULL)
    {
        return;
    }
    cout << head->data << " ";
    pre_order(head->left);
    pre_order(head->right);
}
void in_order(node *head)
{
    if (head == NULL)
    {
        return;
    }
    in_order(head->left);
    cout << head->data << " ";
    in_order(head->right);
}
void post_order(node *head)
{
    if (head == NULL)
    {
        return;
    }
    post_order(head->left);
    post_order(head->right);
    cout << head->data << " ";
}
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
int main()
{
    node *head = new node(1);

    head->left = new node(2);
    head->right = new node(3);
    head->left->left = new node(4);
    head->left->right = new node(5);
    head->right->left = new node(6);
    head->right->right = new node(7);
    cout << "Pre-Order: ";
    pre_order(head);
    cout << endl;
    cout << "In-Order: ";
    in_order(head);
    cout << endl;
    cout << "Post-order: ";
    post_order(head);
    cout << endl;
    cout << "Level Order: ";
    level_order(head);
    cout << endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/