#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a=10;
    int *p=&a;
    cout<<*p<<endl;
    int **q=&p;
    **q=100;
    cout<<*q<<endl; // one time dereferencing it points to *p
    cout<<**q<<endl;// two times dereferencing it points to a
    cout<<a<<endl;
    return 0;
}