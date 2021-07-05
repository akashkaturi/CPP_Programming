#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;
    int i;
    int arr[n];
    cout<<"Enter the elements"<<endl;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_num=INT_MIN;
    int min_num=INT_MAX;
    for(i=0;i<n;i++){
        max_num=max(max_num,arr[i]);
        min_num=min(min_num,arr[i]);
    }
    cout<<"Maximum Number: "<<max_num<<endl<<"Minimum Number: "<<min_num<<endl;
    
    return 0;
}