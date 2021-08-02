#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int first_occurence(int arr[],int n,int i,int key)
{   
    if(i==n){
        return -1;
    }
    if (arr[i]==key){
        return i;
    }
    return first_occurence(arr,n,i+1,key);
    
}
int last_occurence(int arr[],int n,int i, int key)
{
    if(i==0){
        return -1;
    }
    if(arr[i]==key){
        return i;
    }
    return last_occurence(arr,n,i-1,key);
}
int main()
{
    int arr[]={1,2,3,4,2,3,2,4};
    int n=8;
    int i=n;
    int key=3;
    cout<<first_occurence(arr,8,0,3)<<endl;
    cout<<last_occurence(arr,n,i,key)<<endl;

    
    return 0;
}