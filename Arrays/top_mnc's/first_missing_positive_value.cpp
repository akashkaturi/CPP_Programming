#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int i,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_range=1e6+2;
    int idx[max_range];
    for(i=0;i<max_range;i++)
    {
        idx[i]=-1;
    }
    for(i=0;i<n;i++){
        if(arr[i]>=0){
            idx[arr[i]]=1;
        }
    }
    for(i=0;i<max_range;i++){
        if(idx[i]==-1){
            cout<<"Missing smallest positive number is: "<< i <<endl;
            break;
        }
    }
    
    return 0;
}