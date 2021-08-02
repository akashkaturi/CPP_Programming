#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx=INT_MIN;
    for(i=0;i<n;i++){
       
        mx=max(mx,arr[i]);
        cout<<mx<<" ";
    }
    
    return 0;
}