#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string remove_duplicates(string s){
    if(s.length()==0){
        return "";
    }
    char ch=s[0];
    string ans=remove_duplicates(s.substr(1));
    if(ch==ans[0]){
        return ans;
    }
    return(ch+ans);

}
int main()
{
    string s="aaabbbssskkkkddd";
    cout<<remove_duplicates(s)<<endl;
    
    return 0;
}