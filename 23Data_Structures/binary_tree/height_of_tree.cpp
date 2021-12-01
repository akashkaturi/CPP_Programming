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
int height_of_tree(node *root)
{
    if (root == NULL)
    {
        return 0;   
    }
    return max(height_of_tree(root->left) + 1, height_of_tree(root->right) + 1);
}
int diameter(node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int leftheight = height_of_tree(root->left);
    int rightheight = height_of_tree(root->right);
    int currdiameter = leftheight + rightheight + 1;
    int lDiameter = diameter(root->left);
    int rDiameter = diameter(root->right);
    return max(currdiameter, max(lDiameter, rDiameter));
}
int optimizedDiamter(node *root, int *height)
{
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

    cout << height_of_tree(root) << endl;
    cout << diameter(root) << endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/