//Complexity of binary search is O(log(n))

#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int binary_search(int arr[],int n,int key){
    int start=1;
    int end=n;
    while(start<=end){
        int mid=(start+end)/2;
        if(arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else {
            start=mid+1;
        }
    }
    return -1;
} 
int main()
{
    int n,high,low,key,i,arr[n];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    cin>>key;
    cout<<binary_search(arr,n,key)<<endl;;
    return 0;
}