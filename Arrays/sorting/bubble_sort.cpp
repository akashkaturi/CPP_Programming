#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,i,j;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
   
    // for(i=0;i<n-1;i++){
    //     for(j=0;j<n-1;j++){
    //         if(arr[j]>arr[j+1]){
    //         int temp=arr[j];
    //         arr[j]=arr[j+1];
    //         arr[j+1]=temp;
    //         }
    //     }
    // }
    int counter=0;
    while(counter<n){
        for(i=0;i<n-counter;i++){ // this is because for every iteration the last element(max element) is placed correctly in its position 
                if(arr[j]>arr[j+1]) // i.e max element is bubbled out from the list and placed at its correct position. so this sort is called bubble sort.
                {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                }
            }
    }
    for(i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//https://www.youtube.com/watch?v=xcPFUCh0jT0&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=21
