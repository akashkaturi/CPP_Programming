#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int j,n;
    cin>>n;
    int arr[n];
    for(j=0;j<n;j++){
        cin>>arr[j];
    }
    int len_arr=2;
    int ans=2;
    int i=2;
    int prev_diff=arr[1]-arr[0];
    while(i<n){
        if(prev_diff==arr[i]-arr[i-1]){
            len_arr+=1;
        }
        else{
            prev_diff=arr[i]-arr[i-1];
            len_arr=2;
        }
        ans=max(ans, len_arr);
        i++;
    }
    cout<<ans<<endl;
    
    return 0;
}