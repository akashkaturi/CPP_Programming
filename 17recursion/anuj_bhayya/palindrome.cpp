#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool palindrome(string s,int l,int r){
    if(l>=r){
        return true;
    }
    if(s[l]!=s[r]){
        return false;
    }
    return palindrome(s, l + 1, r - 1);
}
int main()
{
    string s="akashsaka";
    cout<<palindrome(s, 0, s.length()-1)<<endl;
    return 0;
}

/*
Input:


Output:


Explanation:

*/