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
int sumAtKthLevel(node *&head, int k)
{
    if (head == NULL)
    {
        return -1;
    }
    queue<node *> q;
    q.push(head);
    q.push(NULL);
    int sum = 0;
    int level = 0;
    while (!q.empty())
    {
        node *ele = q.front();
        q.pop();
        if (ele != NULL)
        {
            if (level == k)
            {
                sum += ele->data;
            }
            if (ele->left)
            {
                q.push(ele->left);
            }
            if (ele->right)
                q.push(ele->right);
        }
        else if (!q.empty())
        {
            q.push(NULL);
            level++;
        }
    }
    return sum;
}
int count_nodes(node *head)
{
    if (head == NULL)
    {
        return 0;
    }
    return (count_nodes(head->left) + count_nodes(head->right) + 1);
}
int sum_of_all_nodes(node *&head)
{
    if (head == NULL)
    {
        return 0;
    }
    return (sum_of_all_nodes(head->left) + sum_of_all_nodes(head->right) + head->data);
}
int height(node *&head)
{
    if (head == NULL)
    {
        return 0;
    }
    int left = height(head->left);
    int right = height(head->right);
    return max(left, right) + 1;
}
int diameter_of_tree(node *&head)
{
    if (head == NULL)
    {
        return 0;
    }
    int left = height(head->left);
    int right = height(head->right);
    int curr_diameter = left + right+1;
    int left_diameter = diameter_of_tree(head->left);
    int right_diameter = diameter_of_tree(head->right);
    return max(curr_diameter, max(left_diameter, right_diameter));
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
    cout << "Sum at Kth Level: ";
    cout << sumAtKthLevel(head, 1);
    cout << endl;
    cout << "No Of Nodes: ";
    cout << count_nodes(head);
    cout << endl;
    cout << "Sum of all Nodes: ";
    cout << sum_of_all_nodes(head);
    cout << endl;
    cout << "Height of a Tree: ";
    cout << height(head);
    cout << endl;
    cout << "Diamter of a Tree: ";
    cout << diameter_of_tree(head);
    cout << endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/