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
void insert_at_head(node *&head, int val)
{
    node *temp = new node(val);
    temp->next = head;
    head = temp;
}
void insert_at_tail(node *&head, int val)
{
    if (head == NULL)
    {
        insert_at_head(head, val);
        return;
    }
    node *n = new node(val);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}
void make_cycle(node *&head, int pos)
{
    node *temp = head;
    node *startPos;
    int count = 1;
    while (temp->next != NULL)
    {

        if (count == pos)
        {
            startPos = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = startPos;
}
bool find_cycle(node *&head)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}
void remove_cycle(node *&head)
{
    node *slow = head;
    node *fast = head;
    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    fast = head;

    while (fast->next != slow->next)
    {
        slow = slow->next;
        fast = fast->next;
    }
    slow->next = NULL;
}
node *middle_element(node *&head)
{
    node *slow = head;
    node *fast = head;
    while (fast != NULL && fast->next != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
node *reverse_linked_list(node *&head)
{
    node *curr = head;
    node *prevptr = NULL;
    node *nextptr;
    while (curr != NULL)
    {
        nextptr = curr->next;
        curr->next = prevptr;
        prevptr = curr;
        curr = nextptr;
    }
    return prevptr;
}
void delete_at_head(node *&head)
{
    if (head == NULL)
    {
        cout << "Empty list";
        return;
    }
    node *temp = head;
    head = head->next;
    delete temp;
}
void delete_at_end(node *&head)
{
    if (head == NULL)
    {
        cout << "Empty list" << endl;
        return;
    }
    node *temp = head;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    node *toDel = temp->next;
    temp->next = NULL;
    delete toDel;
}
node *reverse_k(node *head, int k)
{

    node *prevptr = NULL;
    node *currptr = head;
    node *nextptr;
    int count = 0;
    while (currptr != NULL && count < k)
    {
        nextptr = currptr->next;
        currptr->next = prevptr;
        prevptr = currptr;
        currptr = nextptr;
        count++;
    }
    if (nextptr != NULL)
    {
        head->next = reverse_k(nextptr, k);
    }
    return prevptr;
}

int length_of_linked_list(node *&head)
{
    int count = 0;
    node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    return count;
}
node *append_last_k_elements_in_linked_list(node *&head, int k)
{
    int l = length_of_linked_list(head);
    int count = 1;
    node *newHead;
    node *newTail;
    node *tail = head;
    while (tail->next != NULL)
    {
        if (count == l - k)
        {
            newTail = tail;
        }
        if (count == l - k + 1)
        {
            newHead = tail;
        }
        tail = tail->next;
        count++;
    }
    tail->next = head;
    newTail->next = NULL;
    return newHead;
}
void intersect(node *&head1, node *head2, int pos)
{
    node *temp1 = head1;
    while (pos--)
    {
        temp1 = temp1->next;
    }
    node *temp2 = head2;
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp1;
}
void find_intersection(node *&head1, node *&head2)
{
    int len1 = length_of_linked_list(head1);
    int len2 = length_of_linked_list(head2);
    node *t1, *t2;
    if (len1 > len2)
    {
        t1 = head1;
        t2 = head2;
    }
    else
    {
        t1 = head2;
        t2 = head1;
    }
    int difference = abs(len1 - len2);
    while (difference--)
    {
        t1 = t1->next;
        if (t1 == NULL)
        {
            cout << "No Intersection";
        }
    }
    while (t1 != NULL && t2 != NULL)
    {
        t1 = t1->next;
        t2 = t2->next;
        if (t1 == t2)
        {
            cout << "Intersection is " << t1->data << endl;
            return;
        }
    }
}
node *merge_two_sorted_linked_lists(node *&head1, node *&head2)
{
    node *t1 = head1;
    node *t2 = head2;
    node *d = new node(0);
    node *t3 = d;
    while (t1 != NULL && t2 != NULL)
    {
        if (t1->data <= t2->data)
        {
            t3->next = t1;
        }
        else
        {
            t3->next = t2;
        }

        t1 = t1->next;
        t2 = t1->next;
        t3 = t3->next;
    }
    return d->next;
}
bool isPalindrome(node *&head)
{
    if (head->next == NULL || head->next == NULL)
    {
        return true;
    }
    node *middle = middle_element(head);
    node *second_half = reverse_linked_list(middle);
    node *firsthalf = head;
    while (second_half != NULL)
    {
        if (second_half->data != firsthalf->data)
        {
            return false;
        }
        second_half = second_half->next;
        firsthalf = firsthalf->next;
    }
    return true;
}
void display(node *head)
{
    if (head == NULL)
    {
        cout << "Empty list";
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

int main()
{
    node *head = NULL;
    insert_at_tail(head, 1);
    insert_at_tail(head, 2);
    insert_at_tail(head, 3);
    insert_at_tail(head, 4);
    insert_at_tail(head, 5);
    // insert_at_tail(head, );
    insert_at_tail(head, 4);
    insert_at_tail(head, 3);
    insert_at_tail(head, 2);
    insert_at_tail(head, 1);
    node *head2 = NULL;
    insert_at_tail(head2, 6);
    insert_at_tail(head2, 7);
    insert_at_tail(head2, 8);

    // display(head);
    // make_cycle(head, 4);

    // cout << find_cycle(head) << endl;
    // remove_cycle(head);
    // cout << find_cycle(head) << endl;
    // display(head);
    // middle_element(head);
    // // node *ptr = reverse_linked_list(head);

    // // display(ptr);
    // delete_at_head(head);
    // display(head);
    // delete_at_end(head);
    // node *k = append_last_k_elements_in_linked_list(head, 5);
    // intersect(head, head2, 5);
    // display(head);
    // display(head2);
    // find_intersection(head, head2);
    // node *mer = merge_two_sorted_linked_lists(head, head2);
    // display(mer);
    // node *rev = reverse_k(head, 3);
    cout << isPalindrome(head);
    // display(rev);
    return 0;
}

/*
Input:


Output:


Explanation:

*/