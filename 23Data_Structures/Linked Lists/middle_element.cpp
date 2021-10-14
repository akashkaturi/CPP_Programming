#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertAtBegining(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        head = n;
        return;
    }
    n->next = head;
    head = n;
}

void display(node *&head)
{
    if (head == NULL)
    {
        cout << "Empty List" << endl;
        return;
    }
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void middle(node *&head)
{
    if (head == NULL)
    {
        cout << "Empty list";
        return;
    }
    node *slow = head;
    node *fast = head;
    while (fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    cout << slow->data << endl;
}
void insertAtEnd(node *&head, int val)
{
    node *n = new node(val);
    if (head == NULL)
    {
        insertAtBegining(head, val);
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
int main()
{
    node *head = NULL;
    insertAtBegining(head, 1);
    insertAtBegining(head, 2);
    insertAtBegining(head, 3);
    insertAtBegining(head, 4);
    insertAtBegining(head, 5);
    insertAtEnd(head, 6);
    insertAtEnd(head, 7);
    insertAtEnd(head, 8);
    insertAtEnd(head, 9);
    display(head);
    middle(head);
    return 0;
}

/*
Input:


Output:


Explanation:

*/