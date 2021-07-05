#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int linear_search(int arr[], int n,int key){
    int i;
    for(i=1;i<=key;i++){
        if(key==arr[i]){
            return i;
        }
    }
    return -1;
}
int main()
{
    int n,i,arr[n],key;
    cout<<"enter n"<<endl;
    cin>>n;
    cout<<"Enter elements: "<<endl;;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter value of x:"<<endl;
    cin>>key;
    cout<<linear_search(arr,n,key)<<endl;
    
    return 0;
}