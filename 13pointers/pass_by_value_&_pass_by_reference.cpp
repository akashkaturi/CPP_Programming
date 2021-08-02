#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void swap(int *a, int *b){
    int temp=*a; //*a *b are dereferencing the pointers and swapping a,b
    *a=*b;
    *b=temp;
}
void increment(int *a){
    ++*a;
}
int main()
{
    int a=2;
    int b=4;
    int *a_ptr=&a;
    int *b_ptr=&b;
    swap(a_ptr,b_ptr); // call by reference we can use a_ptr,b_ptr in the place of &a,&b in order to send the addresses.
    cout<<a<<" "<<b<<endl;// call by reference is simply nothing but using the address of the variables and directly modifying the values that are stored in the addresses.
    increment(&a);
    increment(&b);
    cout<<a<<" "<<b<<endl;
    return 0;
}