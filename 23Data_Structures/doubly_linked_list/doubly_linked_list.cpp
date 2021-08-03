#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;

    node(int val){
        data=val;
        prev=NULL;
        next=NULL;
    }
};
void insertAthead(node* &head, int val){


    node* n=new node(val);
    n->next=head;
    if(head!=NULL){
    head->prev=n;
    }
    head=n;
}
void insertAttail(node* &head, int val){
    node* n=new node(val);
    node* temp = head;

    if(head==NULL){
        insertAthead(head,val);
    }
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
    n->prev=temp;
}
void display(node* &head){
    node* temp=head;
    while (temp!=NULL)    
    {   
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
    
}
void deleteAtfirst(node* &head){
    if(head==NULL){
        return;
    }
    node* temp=head;
    head=temp->next;
    temp->next->prev=NULL;
    delete temp;
}
void deleteAtn(node* &head, int val){

    node* temp=head;
    if(temp->data==val)
    {
    deleteAtfirst(head);  
    return;
    } 
    while(temp->data!=val){
        temp=temp->next;
    }
    temp->prev->next=temp->next;
    temp->next->prev=temp->prev;

}

void deleteAtLast(node* &head){

    node* temp=head;

    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->prev->next=NULL;
    
}

int main()
{

   node* head=NULL;
   insertAthead(head,1);
   insertAthead(head,2);
   insertAthead(head,3);
   insertAthead(head,4);
   insertAthead(head,5);
   display(head);
   deleteAtn(head,5);
    display(head);
    deleteAtLast(head);
    display(head);
    deleteAtfirst(head);
    display(head);
    return 0;
}