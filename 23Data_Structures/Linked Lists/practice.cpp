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
void deleteAthead(node* &head){
    if(head==NULL){
        return;
    }
    node* todelete=head;
    head=head->next;
    delete todelete;
}
int main()
{   
    node* head=NULL;
    insertAthead(head,3);
    insertAthead(head,2);
    insertAthead(head,1);
    deleteAtEnd(head);
    display(head);
    insertAtTail(head,4);
    insertAtTail(head,5);
    insertAtTail(head,6);
    deleteParticularValue(head,2);
    deleteAthead(head);
    display(head);



    
    
    return 0;
}