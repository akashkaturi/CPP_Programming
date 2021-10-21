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
    };
};

void insert_at_head(node *&head, int val)
{
    node *temp = new node(val);
    if (head == NULL)
    {
        head = temp;
        return;
    }
    temp->next = head;
    head = temp;
}
void display(node *&head)
{
    if (head == NULL)
    {
        cout << "Empty List";
        return;
    }
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
    ;
}
node *reverse_linked(node *&head)
{
    node *prev = NULL;
    node *curr = head;
    node *nextptr;
    while (curr != NULL)
    {
        nextptr = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextptr;
    }

    return prev;
}
node *recursive_reverse(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *new_head = recursive_reverse(head->next);
    head->next->next = head;
    head->next = NULL;
    return new_head;
}
node *add_linked_lists(node *&num1, node *&num2)
{
    node *dummy = new node(0);
    node *l3 = dummy;
    int carry = 0;
    while (num1 != NULL || num2 != NULL)
    {
        int sum = 0;
        if (num1 != NULL)
        {
            sum += num1->data;
            num1 = num1->next;
        }
        if (num2 != NULL)
        {
            sum += num2->data;
            num2 = num2->next;
        }
        sum += carry;
        carry = sum / 10;
        int num_added_to_linked_list = sum % 10;
        node *temp = new node(num_added_to_linked_list);
        l3->next = temp;
        l3 = l3->next;
    }
    return dummy->next;
}
int main()
{
    node *num1 = NULL;
    node *num2 = NULL;
    insert_at_head(num1, 3);
    insert_at_head(num1, 4);
    insert_at_head(num1, 5);
    insert_at_head(num2, 2);
    insert_at_head(num2, 9);
    insert_at_head(num2, 2);
 
    node *ans = add_linked_lists(num1, num2);
    // node *rev1 = recursive_reverse(num1);
    // display(rev1);
    // node *rev2 = recursive_reverse(num2);
    // display(rev2);
    display(ans);

    return 0;
}

/*
Input:


Output:


Explanation:

*/
//   ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//         int carry=0;
//         ListNode* dummy=new ListNode(0);
//         ListNode* l3=dummy;
//         int sum;
//         while(l1!=NULL || l2!=NULL || carry){
//             sum=0;
//             if(l1!=NULL){
//                 sum+=l1->val;
//                 l1=l1->next;
//             }
//             if(l2!=NULL){
//                 sum+=l2->val;
//                 l2=l2->next;
//             }
//             sum+=carry;
//             carry=sum/10;
//             ListNode *temp=new ListNode(sum%10);
//             l3->next=temp;
//             l3=l3->next;

//         }
//         return dummy->next;;
//     }