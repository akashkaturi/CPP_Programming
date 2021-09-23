#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j,temp,n;
    cin>>n;
    int arr[n];
    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
//https://www.youtube.com/watch?v=dQa4A2Z0_Ro&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=20