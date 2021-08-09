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
    void enqueue(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue Overflow" << endl;
        }
        else
        {
            back++;
            arr[back] = x;
            front = 0;
        }
    }
    void dequeue()
    {
        if (front > back)

        {
            cout << "Empty queue";
        }
        else
        {
            front++;
        }
    }
    bool is_empty()
    {
        if (back==-1 && front==-1)
        {
            return true;
        }
        else{
            return false;
        }
    }
    void display(){
        if(back==-1 and front ==-1){
            cout << "Empty queue";
        }
        else{
            for (int i = front; i < back;i++){
                cout << arr[i] << endl;
            }
        }
    }
};
int main()
{
    Queue q;
    q.enqueue(1);
    // q.enqueue(2);
    // q.enqueue(3);
    // q.enqueue(4);
    // q.enqueue(5);
    // q.enqueue(6);
    q.display();
    q.dequeue();
    q.display();

    return 0;
}