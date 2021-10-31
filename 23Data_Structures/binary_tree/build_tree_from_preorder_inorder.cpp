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
void inorder(node *&root)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}
int search(int inorder[], int start, int end, int curr)
{
    for (int i = start; i <= end; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
    }
    return -1;
}
node *buildTree(int preorder[], int inorder[], int start, int end)
{
    static int idx = 0;
    if (start > end)
    {
        return NULL;
    }
    int curr = preorder[idx];
    idx++;
    node *n = new node(curr);
    if (start == end)
    {
        return n;
    }
    int pos = search(inorder, start, end, curr);
    n->left = buildTree(preorder, inorder, start, pos - 1);
    n->right = buildTree(preorder, inorder, pos + 1, end);
    return n;
}
int main()
{

    int preorder[] = {1, 2, 4, 5, 3, 6, 7};
    int inorders[] = {4, 2, 5, 1, 6, 3, 7};
    node *root = buildTree(preorder, inorders, 0, 6);
    inorder(root);
    return 0;
}

/*
Input:


Output:


Explanation:

*/