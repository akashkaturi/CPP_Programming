#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string s="sjdghnkjgkhgnooooptriualeoiw";
    int arr[26];
    for(int i=1;i<=26;i++)
    { arr[i]=0;}
    for(int i=1; i<=s.size();i++){
        arr[s[i]-'a']+=1;
    }
    char ans='a';
    int frequency=0;
    for(int i=1;i<=26;i++){
        if(arr[i] > frequency){
            frequency=arr[i];
            ans=i+'a';
        }
    }
    cout<<frequency<<" "<<ans<<endl;
    return 0;
}