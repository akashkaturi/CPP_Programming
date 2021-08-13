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

class Queue
{
public:
    node *front;
    node *back;
    Queue()
    {
        front = NULL;
        back = NULL;
    }

    void push(int x){
        node *n = new node(x);
        if (front == NULL)
        {
            back=n;
            front = n;
        }
        back->next = n;
        back = n;
    }
    void peek(){
        if(front==NULL){
            cout << "Queue Empty" << endl;
        }
        cout << front->data << endl;
    }
    void pop(){
        if(front==NULL){
            cout << "Queue is empty" << endl;
        }
        node *todolete = front;
        front = front->next;
        delete todolete;
    }
    bool empty(){
        if(front==NULL){
            return true;
        }
        return false;
    }
    void display(){
        if(front==NULL){
            cout << "Empty queue" << endl;
        }
        node *ptr = front;
        while(ptr!=NULL){
            cout << ptr->data<<"->";
            ptr = ptr->next;
        }
        cout <<"NULL"<<endl;
    }
};
int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.peek();
    q.display();

    return 0;
}