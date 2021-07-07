//https://www.youtube.com/watch?v=kJW_iXrwePE&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=25&t=5s
#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,n;
    cin>>n;
    int a[n];
    for(i=1;i<n;i++){
        cin>>a[i];
    }
    const int N= 1e6+2; // 1e6= 10^6;
    int idx[N];
    for(int i=1;i<N;i++){
        idx[i]=-1;
    }
    int min_idx=INT_MAX;
    for(i=1;i<n;i++)
    {
        int num=a[i];
        if(idx[num]!=-1){
            min_idx=min(idx[num],min_idx);
        }
        idx[num]=i;
        
    }
    if(min_idx==INT_MAX){
        cout<<-1<<endl;
    }
    else{
    cout<<min_idx<<endl;
    }
    return 0;
}