#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node *prev;
    node(int val)
    {
        data = val;
        prev = NULL;
        next = NULL;
    }
};
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    if (head != NULL)
    {
        head->prev = n;
    }
    head = n;
}
void insertAtEnd(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        insertAtHead(head, val);
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}
void delatHead(node *&head)
{
    node *todel = head;
    head = head->next;
    head->prev = NULL;
    delete todel;
}
void delatpos(node *&head, int pos)
{
    if (pos == 1)
    {
        delatHead(head);
        return;
    }
    node *temp = head;
    int count = 0;
    while (count != pos && temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    temp->prev->next = temp->next;
    if (temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }
    delete temp;
}
void display(node *&head)
{
    // if (head = NULL)
    // {
    //     cout << "Empty";
    //     return;
    // }
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}
int main()
{
    node *head = NULL;
    insertAtEnd(head, 1);
    insertAtEnd(head, 2);
    insertAtEnd(head, 3);
    insertAtEnd(head, 4);
    insertAtEnd(head, 5);
    insertAtEnd(head, 6);
    insertAtEnd(head, 7);
    display(head);
    delatpos(head, 3);
    display(head);

    return 0;
}

/*
Input:


Output:


Explanation:

*/