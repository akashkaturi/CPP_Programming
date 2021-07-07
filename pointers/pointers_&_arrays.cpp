#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={10,20,30,40};
    cout<<*(arr+1)<<endl;
    for(int i=0;i<4;i++){
        cout<<*(arr+i)<<endl; //arr++ is an illegal operation because arr is a const pointer and it cannot be modified.
                //arr is an indexing pointer, so when incremented it goes to next index which will be next memory location.
    }
    int *ptr=arr;
    for(int i=0;i<4;i++){
        cout<<*ptr<<endl;
        ptr++; 
    }
    return 0;
}