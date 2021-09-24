#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int x)
    {
        data = x;
        next = NULL;
    }
};
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    head = n;
}
void insertAtTail(node *&head, int val)
{
    if (head == NULL)
    {
        insertAtHead(head, val);
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    node *n = new node(val);
    temp->next = n;
}
void print(node *&head)
{

    if (head == NULL)
    {
        cout << "Empty list" << endl;
        return;
    }
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}
node *sort_linked_lists(node *&head1, node *&head2)
{
    node *p1 = head1;
    node *p2 = head2;
    node *dummyNode = new node(-1);
    node *p3 = dummyNode;
    while (p1 != NULL && p2 != NULL)
    {
        if (p1->data < p2->data)
        {
            p3->next = p1;
            p1 = p1->next;
        }
        else
        {
            p3->next = p2;
            p2 = p2->next;
        }
        p3 = p3->next;
    }
    while (p1 != NULL)
    {
        p3->next = p1;
        p1 = p1->next;
        p3 = p3->next;
    }
    while (p2 != NULL)
    {
        /* code */
        p3->next = p2;
        p2 = p2->next;
        p3 = p3->next;
    }

    return dummyNode->next;
}
int main()
{

    node *first = NULL;
    node *second = NULL;
    int arr1[4] = {5, 6, 7, 8};
    int arr2[4] = {1, 2, 3, 4};
    for (int i = 0; i < 4; i++)
    {
        insertAtTail(first, arr1[i]);
    }
    for (int i = 0; i < 4; i++)
    {
        insertAtTail(second, arr2[i]);
    }
    // print(first);
    node *k = sort_linked_lists(first, second);
    print(k);

    return 0;
}

/*
Input:


Output:


Explanation:

*/