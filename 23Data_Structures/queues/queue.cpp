#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define n 100
class Queue
{
    int *arr;
    int front;
    int back;

public:
    Queue()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }
    void push(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue Overflow" << endl;
            return;
        }
        else
        {
            back++;
            arr[back] = x;
        }
        if (front == -1)
        { // this is because if we are adding the first element then we have to check this condition.
         //because front cannot point to -1
            front++;
        }
    }
    void pop()
    {
        if (front == -1 || front > back)
        {
            cout << "Empty queue";
        }
        else
        {
            front++;
        }
    }
    int peek()
    { // to see which element is first in the queue
        if (front == -1 || front > back)
        {
            cout << "No elements in queue" << endl;
            return -1;
        }
        return arr[front];
    }
    bool is_empty()
    {
        if (front == -1 || front > back)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void display(){
        if(front==-1 or front>back){
            cout << "Empty queue" << endl;
        }
        else{
            for (int i = front; i < back;i++){
                cout << arr[i]<<" ";
            }
            cout << endl;
        }
    }
};
int main()
{
    Queue q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    q.push(5);
    q.push(6);
    q.push(7);
    q.display();
    q.pop();
    q.peek();
    q.display();

    return 0;
}