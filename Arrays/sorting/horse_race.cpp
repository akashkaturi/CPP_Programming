//Fastest 3 horses among the 25 horses. only 5 horses can run at a time.

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int * selection_sort(int arr[],int n){
    int i,j,temp;
      for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++){
            if(arr[j]<arr[i]){
                temp=arr[j];
                arr[j]=arr[i];
                arr[i]=temp;
            }
        }
    }
    return arr;
}
int main()
{
    int i,j,temp,n;
    cin>>n;
    int arr[n];
    
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int *k=selection_sort(arr,n);

    for(i=0;i<n;i++){
        cout<<*(k+i)<<" ";
    }
}
//https://www.youtube.com/watch?v=dQa4A2Z0_Ro&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=20