#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class node
{
    int data;
    node *next;

public:
    node(int val)
    {
        data = val;
        next = NULL;
    }
    void create_list(node *&head, vector<int> v)
    {
        for (auto i : v)
        {
            head->insert_at_end(head, i);
        }
    }
    void insert_at_head(node *&head, int val)
    {
        node *n = new node(val);
        n->next = head;
        head = n;
    }
    void insert_at_end(node *&head, int val)
    {
        if (head == NULL)
        {
            insert_at_head(head, val);
        }
        else
        {
            node *temp = head;
            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            node *n = new node(val);
            temp->next = n;
        }
    }
    void delete_at_head(node *&head)
    {
        if (head == NULL)
        {
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
            return;
        }
        node *temp = head;
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = NULL;
    }
    void delete_at_particular_position(node *&head, int position)
    {
        if (head == NULL)
        {
            return;
        }
        if (head->next == NULL && position == 1)
        {
            delete_at_head(head);
        }
        node *temp = head;
        int count = 1;
        while (count != position)
        {
            temp = temp->next;
            count++;
        }
        node *to_delete = temp->next;
        temp->next = temp->next->next;
        delete to_delete;
    }
    node *remove_duplicates(node *head)
    {
        if (head == NULL)
        {
            return head;
        }
        node *n = head;
        while (n && n->next)
        {
            if (n->data == n->next->data)
            {
                n->next = n->next->next;
            }
            else
            {
                n = n->next;
            }
        }
        return head;
    }
    void display(node *&head)
    {
        if (head == NULL)
        {
            cout << "The list is empty" << endl;
        }
        node *temp = head;
        while (temp != NULL)
        {
            cout << temp->data << "->";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
    void make_cycle(node *&head, int position)
    {

        node *temp = head;
        node *start_node;
        int count = 1;
        while (temp->next != NULL)
        {
            if (count == position)
            {
                start_node = temp;
            }
            temp = temp->next;
            count++;
        }
        temp->next = start_node;
    }
    bool detect_cycle(node *&head)
    {
        node *slow = head;
        node *fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
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
        while (slow->next != fast->next)
        {
            slow = slow->next;
            fast = fast->next;
        }
        slow->next = NULL;
    }
    void middle_of_linked_list(node *&head)
    {
        if (head == NULL)
        {
            return;
        }
        node *slow = head;
        node *fast = head;
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        cout << slow->data << endl;
    }
};

int main()
{
    node *list;
    node *head = NULL;
    vector<int> v1 = {1, 1, 2, 3, 3, 3, 4};
    list->create_list(head, v1);
    list->display(head);
    node *head2 = NULL;
    vector<int> v2 = {1, 2, 3, 4, 5,6,7,8};
    list->create_list(head2, v2);
    list->display(head2);
    list->middle_of_linked_list(head2);

    return 0;
}

/*
Input:


Output:


Explanation:

*/
