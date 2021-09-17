#include <iostream>
#include <bits/stdc++.h> 
using namespace std;
/* 
      1
     / \
    2   3  
   / \ / \ 
  4  5 6  7

Preorder traversal : root, return left until end and then right.
Preorder:  1 2 4 5 3 6 7 

Inorder traversal : traverse left end  until no left child is found and then add the number to sequence,
In other words add the number to sequence if there is no left child or left child is visited,
 traverse back and then add the root node
whose left node is already visited, then proceed to right.
Inorder: 4 2 5 1 6 3 7

PostOrder: Travel left subtree, then right subtree and then root node.
PostOrder: 4 5 2 6 7 3 1
Travel to 1, one has left and right, traverse left subtree, for 2 we have both left and right nodes, traverse left subtree, for 4
there are no subtrees present now add it to sequence and traverse back to 2, then traverse to right subtree, for 5
there are no subtrees, add 5 to the sequence and traverse back to 2, as 4 and 5 are visited, add 2 to the sequence, traverse back to 1
now only left subtree is visited, but not right subtree so traverse right subtree in similar way.
3 6 7, and finall after both right and left subtrees were added then add 1 to the sequence.
 */

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
void preorder(node* &root)
{   
    if(root==NULL){
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

void inorder(node* &root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

void postorder(node* &root){

    if(root==NULL){
        return;
    }
    postorder(root->left);
    postorder(root->right);
    cout << root->data << " ";
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
    cout << "Preorder: ";
    preorder(root);
    cout << endl;
    cout << "Inorder: ";
    inorder(root);
    cout << endl;
    cout << "Postorder: ";
    postorder(root);

    return 0;
}

/*
Input:


Output:
Preorder: 1 2 4 5 3 6 7 
Inorder: 4 2 5 1 6 3 7 
Postorder: 4 5 2 6 7 3 1

Explanation:

*/