#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i=0,j;
    char arr[100];
    cin>>arr;
    int len=strlen(arr);
    j=len-1;
    bool check=1;
    for(i=0;i<j;i++){
        if(arr[i]!=arr[j-i]){
            check=0;
            break;
        }
    }
    if(check==true){
        cout<<"palindrome"<<endl;

    }
    else{
        cout<<"not a palindrome";
    }
    
    return 0;
}