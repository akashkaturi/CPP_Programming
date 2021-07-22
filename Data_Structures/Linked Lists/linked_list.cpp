#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val){
        data=val;
        next=NULL;
    }
};
void insertAthead(node* &head,int val){
    node* n = new node(val);
    n->next=head;
    head=n;
}   

void insertAtTail(node* &head,int val){
    if(head==NULL){
        insertAthead(head,val);
    }
    else{
        node* temp=head;
        while(temp->next!=NULL){
            temp=temp->next;
        }
        node* n=new node(val);
        temp->next=n;
    }
}
void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
void deleteAtEnd(node* &head){
    node* temp=head;
    while(temp->next->next!=NULL){
        temp=temp->next;
    }
    temp->next=NULL;
}
void deleteAthead(node* &head){
    if(head==NULL){
        return;
    }
    node* todelete=head;
    head=head->next;
    delete todelete;
}
void deleteParticularValue(node* &head, int val){
    if(head==NULL){
        return;
    }
    if(head->next=NULL){
        deleteAthead(head);
        return;
    }
    node* temp=head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete; //if not deleted it leads to memory leak.
}


//reverse a linked list

node* reverse(node* &head){
    node* prevptr=NULL;
    node* currptr=head;
    node* nextptr;

    while(currptr!=NULL){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}

//reverse a linked list recursive way
node* reverseRecursive(node* &head){

    if(head==NULL || head->next==NULL){
        return head;
    }

    node* newhead = reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}

// reverse k nodes of linked list

    node* reverseK(node* &head,int k){
        node* prevptr=NULL;
        node* currptr=head;
        node* nextptr;

        int count=0;
        while(currptr!=NULL && count<k){
            nextptr = currptr->next;
            currptr->next=prevptr;
            prevptr=currptr;
            currptr=nextptr;
            count++;
        }
        if(nextptr!=NULL){
        head->next=reverseK(nextptr,k);
        }
        return prevptr;
    }

int main()
{   
    node* head=NULL;
    insertAthead(head,3);
    insertAthead(head,2);
    insertAthead(head,1);
    // deleteAtEnd(head);
    display(head);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    // deleteParticularValue(head,2);
    // deleteAthead(head);
    node* newhead=reverse(head);
    display(newhead);
    node* newhead_recursive=reverseRecursive(newhead);
    display(newhead_recursive);
    int k=2;
    node* newhead_reversek=reverseK(head,k);
    display(newhead_reversek);



    
    
    return 0;
}