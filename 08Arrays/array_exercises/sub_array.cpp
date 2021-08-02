// no.of subarrays = n(n+1)/2
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,sum=0;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int j;
    for(i=0;i<n;i++){
        sum=0;
        for(j=i;j<n;j++){
            sum=sum+arr[j];
            cout<<"Sum of sub array from "<<i<<" + "<<arr[j]<<" is "<<sum<<endl;;
        }
    }
    
    return 0;
}