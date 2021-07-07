// time complexity < n^2
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    int curr_max=-1;
    int ans=0;
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    if(n==1){
        cout<<"1"<<endl;
        return 0;
    }
    else{
    for(i=0;i<n;i++){
        if(a[i]>curr_max && a[i]>a[i+1]){
            ans++;
        }
       
       
    curr_max=max(curr_max,a[i]);
    cout<<curr_max;
    }
    }
    cout<<ans<<endl;
    return 0;
}