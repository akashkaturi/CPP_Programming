#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *left;
    node *right;
    node(int x)
    {
        data = x;
        left = NULL;
        right = NULL;
    }
};
int64_t countNodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return countNodes(root->left) + countNodes(root->right) + 1;
}
int sum_of_nodes(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    static int sum = root->data;

   sum_of_nodes(root->left) + sum_of_nodes(root->right) + root->data;
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
    int ans = countNodes(root);
    cout << ans << endl;
    int sum = sum_of_nodes(root);
    cout << sum << endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/