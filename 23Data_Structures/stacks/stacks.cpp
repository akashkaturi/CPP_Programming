#include<iostream>
#include<bits/stdc++.h>

using namespace std;
/*
Stack is a data structure to store items in which an item can be added to or removed
from the list only from one end.

LIFO- last in first out.
Eg: removing a coin from pile of coins,
> Push() - to insert any element in the stack
> pop() - to remove the topmost element from the stack
> top() - top points to the top most element of the stack
> empty() - returns true if the stack is empty else false.

These all takes place in constant time - O(1)
*/
#define n 100
class Stack{


    private:
    int *arr;
    int top;
    
    public:
    Stack(){
        arr=new int[n];
        top=-1;
    }

    void push(int x)
    {
        if(top==n-1) // that means there is no more memory in array to push elements
        {
            cout<<"Stack overflow";
            return;
        }
        else{
            top++;
            arr[top]=x;
        }

    }

    void pop()
    {
        if(top==-1)
        {
            cout<<"Empty stack";
            return;
        }
        top--;
    }
    int Top(){
        if(top==-1)
        {
            cout<<"No element in stack"<<endl;
            return -1;
        }

        return arr[top];
    }
    bool empty()
    {
       return top==-1;
    }
};
int main()
{

    Stack st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    cout<<st.Top()<<endl;
    st.pop();
    cout<<st.Top()<<endl;
    cout<<st.empty()<<endl;

    return 0;
}