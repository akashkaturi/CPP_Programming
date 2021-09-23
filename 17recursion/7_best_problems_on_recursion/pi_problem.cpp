#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void pi(string a)
{
    if (a.length() == 0)
    {
        return;
    }
    if (a[0] == 'p' && a[1] == 'i')
    {
        cout << "3.14";
        pi(a.substr(2));
    }
    else
    {
        cout << a[0];
        pi(a.substr(1));
    }
}
int main()
{
    string s="pipppppdsfsafdspisdfpi";
    pi(s);
    
    return 0;
}