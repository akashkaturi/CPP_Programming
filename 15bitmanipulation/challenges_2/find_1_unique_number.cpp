#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int unique(int arr[],int n)
{
    int xorsum=0;
    for(int i=0;i<n;i++)
    {
        xorsum=xorsum^arr[i];

    }
    return xorsum;
}
int main()
{
    int arr[]={1,1,2,2,3,3,4,5,5,6,6};
    int n=11;
    cout<<unique(arr,n)<<endl;
    
    return 0;
}