#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int dec(int n){
    if(n==0)
    {
        return 0;
    }
    cout<<n<<endl;
    dec(n-1);
    return 0;
}

int main()
{
    int n;
    cin>>n;
    dec(n);
    
    return 0;
}