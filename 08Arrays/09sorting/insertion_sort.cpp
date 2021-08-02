#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,current;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for (i=1;i<n;i++){
        current=arr[i];
        int j=i-1;
        while(arr[j]>current && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=current;
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
    return 0;
}
//https://www.youtube.com/watch?v=3GC83dh4cf0&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=22