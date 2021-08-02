#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void ascending(int n){
    if(n==0){
        return;
    }
    ascending(n-1);
    cout<<n<<endl;
}
int main()
{
    int n;
    cin>>n;
    ascending(n);
    
    return 0;
}