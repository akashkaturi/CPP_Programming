#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n,sub_arr=2,max_arr=2;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    int pre_diff=arr[1]-arr[0];
    for(i=2;i<n;i++){
       
        int curr_diff= arr[i]-arr[i-1];
        if(curr_diff==pre_diff){
            sub_arr++;
        }
        else{
            pre_diff=arr[i]-arr[i-1];
            sub_arr=2;
        }

        max_arr=max(max_arr,sub_arr);

    }            
    cout<<max_arr<<endl;                                                          
    
    return 0;
}