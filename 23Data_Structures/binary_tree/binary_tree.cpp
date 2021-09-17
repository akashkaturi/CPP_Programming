/*properties of Binary trees
A binary tree can only have atmost two children for each node.
      1 -- Root, the single element in the first level is called root.
     / \
    2   3  -- Parent nodes, these are children of the root node and parents of the leaves.
   / \ / \ 
  4  5 6  7 -- Leaves, the last nodes with no children are leaves.
-> Maximum nodes at level L = 2^L (max two children for one parent rules applies)
-> Maximum nodes in a tree of height H = (2^H)-1, i.e 1st level - 1, 2nd level - 2, 3rd level - 4, total = 1+2+4=>7=>(2^3)-1
-> For N nodes, minimum possible height or minimum number of levels are log(N+1) (base2), i.e take the above example, if I have 7 nodes then min possible height = log(7+1)(base2)=>3
-> A binary tree with L leaves has at least log(N+1) + 1 number of levels and also L=N+1, if we have 4 leaves at the end then,N=L-1, i.e N=3 log(3+1)+1=> 3 levels to store the remaining nodes.
*/

#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
    Node(int val){
        data = val;
        left  = NULL;
        right = NULL;
    }
};
int main()
{
    struct Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->right->right = new Node(5);
    cout << root->data << endl;
    cout << root->left->data;
    return 0;
}
/*
Hope This will help you 

#include <bits/stdc++.h>
#include <queue>

using namespace std;

// Class of Node 
class node
{
public:
    int data;
    node *left;
    node *right;

    // Default Contructor 
    node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// Create Binary Tree Class 
void binaryTree(node *&root, int val)
{
    node *n = new node(val);
    if (root == NULL)
    {
        root = n;
        return;
    }

    queue<node *> q;
    q.push(root);

    while (!q.empty())
    {
        node *curr = q.front();
        if (curr->left != NULL)
            q.push(curr->left);
        else
        {
            curr->left = n;
            return;
        }
        if (curr->right != NULL)
            q.push(curr->right);
        else
        {
            curr->right = n;
            return;
        }
        q.pop();
    }
}

// Display 
 
// Level Ordre traversal 
void print(node *root)
{
    if (root == NULL)
        return;
    queue<node *> q;
    q.push(root);
    while (!q.empty())
    {
        node *curr = q.front();
        cout << curr->data << " ";
        if (curr->left != NULL)
            q.push(curr->left);
        if (curr->right != NULL)
            q.push(curr->right);
        q.pop();
    }
}

// Given a Binary Tree, print it in two dimension 
#define count 10

void display2D(node *root, int space)
{
    if (root == NULL)
        return;

    space += count;

    display2D(root->right, space);

    for (int i = count; i < space; i++)
        cout << " ";

    cout << root->data << '\n';

    display2D(root->left, space);
}

int main()
{
    node *root = NULL;
    binaryTree(root, 1);
    binaryTree(root, 2);
    binaryTree(root, 3);
    binaryTree(root, 4);
    binaryTree(root, 5);
    binaryTree(root, 6);
    binaryTree(root, 7);
    // print(root);
    // display2D(root,0);
    return 0;
}
*/
