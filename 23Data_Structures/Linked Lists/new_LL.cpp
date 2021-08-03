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
void insertatbeginning(node* &head,int val){
    node* temp=new node(val);
    temp->next=head;
    head=temp;
}
void display(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}
int main()
{
    node* head=NULL;
    insertatbeginning(head,5);
    insertatbeginning(head,4);
    insertatbeginning(head,3);
    insertatbeginning(head,2);
    insertatbeginning(head,1);
    display(head);

    
    return 0;
}