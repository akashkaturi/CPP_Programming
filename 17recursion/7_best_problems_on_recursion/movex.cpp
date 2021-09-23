#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string movex(string s,char x){
    if(s.length()==0) {
        return "";
    }
    char ch = s[0];
    string ans = movex(s.substr(1),'x');
    if(ch==x) {
        return ans + ch;
    }
    return ch + ans;
}
int main()
{
    string s="axxxxcxxcvxxxpxb";
    char i;
    cout<<movex(s,'x');
    
    return 0;
}