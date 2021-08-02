#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
void reverse(string a){
    if(a.length()==0){
        return;
    }
    string ros=a.substr(1);
    reverse(ros);
    cout<<a[0];

}
int main()
{  
    string a="akash";
    reverse(a);
    
    return 0;
}