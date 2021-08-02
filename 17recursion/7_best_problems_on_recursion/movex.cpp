#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string movex(string s,char i){
    if(s.length()==0)
    {
        return "";
    }
    char ch=s[0];
    string ans = movex(s.substr(1),i);
    if(ch==i){
        return ans+ch;
    }
    return ch+ans;

}
int main()
{
    string s="axpxb";
    char i;
    cout<<movex(s,'x');
    
    return 0;
}