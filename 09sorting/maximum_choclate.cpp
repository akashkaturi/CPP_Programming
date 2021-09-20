#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n=15;
    int choc_count=0;
    int wrapper_count=0;
    int i;
    for(i=1;i<=n;i++){
        choc_count+=1;
        wrapper_count+=1;
        if(wrapper_count%3==0){
            choc_count+=1;
            wrapper_count+=1;
        }
    }
    cout<<"Choclates_count: "<<choc_count<<endl<<"Wrapper count: "<<wrapper_count<<endl;
    
    return 0;
}